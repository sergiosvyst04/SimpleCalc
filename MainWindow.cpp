#include "MainWindow.hpp"
#include "ui_MainWindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGridLayout *grd = new QGridLayout;
    firstNumber = new QLineEdit();
    secondNumber = new QLineEdit();
    plus = new QPushButton("+");
    minus = new QPushButton("-");
    multiply = new QPushButton("X");
    divide = new QPushButton("/");
    result = new QLCDNumber();
    ui->centralWidget->setLayout(grd);

    //    result->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    result->setFixedHeight(70);
    result->setFixedWidth(460);

    grd->addWidget(firstNumber, 1, 1);
    grd->addWidget(secondNumber, 1, 2);
    grd->addWidget(plus, 2, 1);
    grd->addWidget(minus, 2, 2);
    grd->addWidget(multiply, 2, 3);
    grd->addWidget(divide, 2, 4);
    grd->addWidget(result, 0, 0, 1, 4);

    connect(plus, &QPushButton::clicked, this, &MainWindow::Plus);
    connect(minus, &QPushButton::clicked, this, &MainWindow::Minus);
    connect(divide, &QPushButton::clicked, this, &MainWindow::Divide);
    connect(multiply, &QPushButton::clicked, this, &MainWindow::Multiply);



}

void MainWindow::Plus()
{
    QVariant value1 = firstNumber->text();
    QVariant value2 = secondNumber->text();

    result->display(value1.toInt() +  value2.toInt());
}

void MainWindow::Minus()
{
    QVariant value1 = firstNumber->text();
    QVariant value2 = secondNumber->text();

    result->display(value1.toInt() -  value2.toInt());
}

void MainWindow::Divide()
{
    QVariant value1 = firstNumber->text();
    QVariant value2 = secondNumber->text();

    result->display(value1.toInt() /  value2.toInt());
}

void MainWindow::Multiply()
{
    QVariant value1 = firstNumber->text();
    QVariant value2 = secondNumber->text();

    result->display(value1.toInt() *  value2.toInt());
}

MainWindow::~MainWindow()
{
    delete ui;
}
