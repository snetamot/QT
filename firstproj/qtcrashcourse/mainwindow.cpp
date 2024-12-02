#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_Add_clicked()
{
    firstNum = ui -> FirstNum->text().toInt();
    secondNum = ui -> SecondNum->text().toInt();
    result = firstNum+secondNum;
    ui -> Result->setText(QString::number(result));
}



void MainWindow::on_Minus_clicked()
{
    firstNum = ui -> FirstNum->text().toInt();
    secondNum = ui -> SecondNum->text().toInt();
    result = firstNum-secondNum;
    ui -> Result->setText(QString::number(result));
}



void MainWindow::on_Multiply_clicked()
{
    firstNum = ui -> FirstNum->text().toInt();
    secondNum = ui -> SecondNum->text().toInt();
    result = firstNum*secondNum;
    ui -> Result->setText(QString::number(result));
}


void MainWindow::on_Divide_clicked()
{
    float first, second, res;

    first = ui -> FirstNum->text().toFloat();
    second = ui -> SecondNum->text().toFloat();
    if (second != 0.0){
        res = float(first/second);
        ui -> Result->setText(QString::number(res));
    } else {
        ui -> Result->setText("CANNOT DIV BY 0");
    }
}

