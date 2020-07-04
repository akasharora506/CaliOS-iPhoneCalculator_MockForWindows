/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_C;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_six;
    QPushButton *pushButton_four;
    QPushButton *pushButton_five;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_three;
    QPushButton *pushButton_one;
    QPushButton *pushButton_two;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(247, 357);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
"};"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color:black;\n"
"	color:white;\n"
"}\n"
"\n"
"background-color : white;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 60, 50, 50));
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"  border: 1px solid gray;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(215, 215, 215);\n"
"\n"
"}"));
        pushButton_plusminus = new QPushButton(centralwidget);
        pushButton_plusminus->setObjectName(QString::fromUtf8("pushButton_plusminus"));
        pushButton_plusminus->setGeometry(QRect(60, 60, 50, 50));
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"  border: 1px solid gray;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(215, 215, 215);\n"
"\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(120, 60, 50, 50));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"  border: 1px solid gray;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(215, 215, 215);\n"
"\n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(180, 60, 50, 50));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"	border-radius:25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #fed8b1;\n"
"}\n"
""));
        pushButton_multi = new QPushButton(centralwidget);
        pushButton_multi->setObjectName(QString::fromUtf8("pushButton_multi"));
        pushButton_multi->setGeometry(QRect(180, 120, 50, 50));
        pushButton_multi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"	border-radius:25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #fed8b1;\n"
"}\n"
""));
        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));
        pushButton_nine->setGeometry(QRect(120, 120, 50, 50));
        pushButton_nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));
        pushButton_seven->setGeometry(QRect(0, 120, 50, 50));
        pushButton_seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));
        pushButton_eight->setGeometry(QRect(60, 120, 50, 50));
        pushButton_eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 180, 50, 50));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"	border-radius:25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #fed8b1;\n"
"}\n"
""));
        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));
        pushButton_six->setGeometry(QRect(120, 180, 50, 50));
        pushButton_six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));
        pushButton_four->setGeometry(QRect(0, 180, 50, 50));
        pushButton_four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));
        pushButton_five->setGeometry(QRect(60, 180, 50, 50));
        pushButton_five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 240, 50, 50));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"	border-radius:25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #fed8b1;\n"
"}\n"
""));
        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));
        pushButton_three->setGeometry(QRect(120, 240, 50, 50));
        pushButton_three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));
        pushButton_one->setGeometry(QRect(0, 240, 50, 50));
        pushButton_one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));
        pushButton_two->setGeometry(QRect(60, 240, 50, 50));
        pushButton_two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(180, 300, 50, 50));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"	border-radius:25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #fed8b1;\n"
"}\n"
""));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName(QString::fromUtf8("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(126, 300, 50, 50));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));
        pushButton_zero->setGeometry(QRect(0, 300, 121, 50));
        pushButton_zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:25px;\n"
"	background-color: #505150;\n"
"	color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_multi->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
