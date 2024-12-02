/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *FirstNum;
    QLineEdit *SecondNum;
    QPushButton *Add;
    QPushButton *Minus;
    QPushButton *Divide;
    QPushButton *Multiply;
    QLabel *label_3;
    QLineEdit *Result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(346, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 80, 101, 16));
        FirstNum = new QLineEdit(centralwidget);
        FirstNum->setObjectName("FirstNum");
        FirstNum->setGeometry(QRect(130, 50, 113, 24));
        SecondNum = new QLineEdit(centralwidget);
        SecondNum->setObjectName("SecondNum");
        SecondNum->setGeometry(QRect(140, 80, 113, 24));
        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(40, 130, 51, 24));
        Minus = new QPushButton(centralwidget);
        Minus->setObjectName("Minus");
        Minus->setGeometry(QRect(110, 130, 51, 24));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        Divide->setGeometry(QRect(180, 130, 51, 24));
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        Multiply->setGeometry(QRect(250, 130, 51, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 190, 101, 16));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(130, 190, 113, 24));
        Result->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "The result is:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
