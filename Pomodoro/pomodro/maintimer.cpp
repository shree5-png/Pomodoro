#include "maintimer.h"
#include "ui_maintimer.h"
#include <QDebug>
#include <QDateTime>
#include <QTime>

MainTimer::MainTimer(QWidget *parent) :
    QDialog(parent,Qt::WindowStaysOnTopHint),
    ui(new Ui::MainTimer)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));

    current_time = QTime(0,0,0);
    timer->start(1000);
}

MainTimer::~MainTimer()
{
    delete ui;
}

void MainTimer::myfunction(){

    //    QTime time = QTime::currentTime();


    current_time = current_time.addSecs(1);


    QString time_text = current_time.toString("hh : mm : ss");

    static int round = 0;
    static bool is_break = false;
    static bool is_round4 = false;


    if(current_time.minute() == 25 && is_break == false && is_round4 == false){

        round++;
        is_break = true;

        current_time = QTime(0,0,0);
        ui->info_label->setText("BREAK TIME: 5-min! \nRound: " + QString::number(round));
        //rgba(7, 70, 28, 1) - dark green-ish color
        ui->label_date_time->setStyleSheet("color:rgba(7, 70, 28, 1);padding-left:50px;");
        ui->info_label->setStyleSheet("color:rgba(7, 70, 28, 1); margin-left:65px;");


        if(round==4){

            ui->info_label->setText("Bonus BREAK TIME: 15-min! \nRound: 4");
            //rgba(93, 10, 10, 1) - dark red-ish color
            ui->label_date_time->setStyleSheet("color:rgba(7, 70, 28, 1);padding-left:50px;");
            ui->info_label->setStyleSheet("color:rgba(93, 10, 10, 1); margin-left:55px;");
        }


    }
    //    current_time.minute() == 5
    //   current_time.minute() == 10;


    if(is_break== true && current_time.minute() == 5 && is_round4 == false){

        is_break = false;
        current_time = QTime(0,0,0);
        ui->info_label->setText("5 min Break will start in every 25 min ");
        //rgba(153, 153, 153, 1) = yellow-ish color
        ui->label_date_time->setStyleSheet("color:black;padding-left:50px;");
        ui->info_label->setStyleSheet("color:rgba(153, 153, 153, 1); margin-left:40px;");
    }

    if(round == 4){

        is_round4 = true;

    }

    if(is_round4 == true && is_break == false &&current_time.minute()== 25){

        is_break = true;
        current_time = QTime(0,0,0);


    }

    if(is_round4 == true && is_break==true && current_time.minute()== 15){

        round =0;
        is_break = false;
        is_round4 = false;
        current_time = QTime(0,0,0);
        ui->info_label->setText("5 min Break will start in every 25 min ");
        //rgba(153, 153, 153, 1) = yellow-ish color
        ui->label_date_time->setStyleSheet("color:black;padding-left:50px;");
        ui->info_label->setStyleSheet("color:rgba(153, 153, 153, 1); margin-left:40px;");

    }


    ui->label_date_time->setText(time_text);

}

void MainTimer::on_pauseResume_clicked()
{


    if(ui->pauseResume->text()=="Pause"){
        timer->stop();

        ui->pauseResume->setText("Resume");
        return;

    }
    if( ui->pauseResume->text()=="Resume"){
        timer->start();

        ui->pauseResume->setText("Pause");
        return;
    }

}

