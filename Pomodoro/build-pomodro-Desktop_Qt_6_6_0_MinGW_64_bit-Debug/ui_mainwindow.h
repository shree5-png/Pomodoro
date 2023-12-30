/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(446, 293);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/penIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setBold(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:50px;\n"
"padding:50px 70px;\n"
""));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Algerian")});
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"color:white;\n"
"background-color:black;\n"
"margin: 0px 160px;\n"
"padding:15px 20px;"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 446, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pomodoro", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "POMODORO", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
