/********************************************************************************
** Form generated from reading UI file 'maintimer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTIMER_H
#define UI_MAINTIMER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainTimer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_date_time;
    QLabel *info_label;

    void setupUi(QDialog *MainTimer)
    {
        if (MainTimer->objectName().isEmpty())
            MainTimer->setObjectName("MainTimer");
        MainTimer->resize(350, 229);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/pomodoro.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainTimer->setWindowIcon(icon);
        MainTimer->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"padding-left:30px;\n"
""));
        verticalLayout = new QVBoxLayout(MainTimer);
        verticalLayout->setObjectName("verticalLayout");
        label_date_time = new QLabel(MainTimer);
        label_date_time->setObjectName("label_date_time");
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setPointSize(28);
        label_date_time->setFont(font);
        label_date_time->setStyleSheet(QString::fromUtf8("margin-left:20px;\n"
""));

        verticalLayout->addWidget(label_date_time);

        info_label = new QLabel(MainTimer);
        info_label->setObjectName("info_label");
        info_label->setStyleSheet(QString::fromUtf8("color:rgba(153, 153, 153, 1);\n"
"padding:10px 60px;\n"
"margin-left:10px;\n"
""));
        info_label->setWordWrap(true);

        verticalLayout->addWidget(info_label);


        retranslateUi(MainTimer);

        QMetaObject::connectSlotsByName(MainTimer);
    } // setupUi

    void retranslateUi(QDialog *MainTimer)
    {
        MainTimer->setWindowTitle(QCoreApplication::translate("MainTimer", "Pomodoro", nullptr));
        label_date_time->setText(QCoreApplication::translate("MainTimer", "Time Start", nullptr));
        info_label->setText(QCoreApplication::translate("MainTimer", "5 min Break will start in every 25 min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainTimer: public Ui_MainTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTIMER_H
