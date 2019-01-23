#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLCDNumber>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void Plus();
    void Minus();
    void Divide();
    void Multiply();

private:
    Ui::MainWindow *ui;
    QLineEdit *firstNumber;
    QLineEdit *secondNumber;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *multiply;
    QPushButton *divide;
    QLCDNumber *result;
};

#endif // MAINWINDOW_HPP
