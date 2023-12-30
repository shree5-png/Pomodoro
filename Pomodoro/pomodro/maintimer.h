#ifndef MAINTIMER_H
#define MAINTIMER_H

#include <QDialog>
#include <QTimer>
#include <QTime>

namespace Ui {
class MainTimer;
}

class MainTimer : public QDialog
{
    Q_OBJECT

public:
    explicit MainTimer(QWidget *parent = nullptr);
    ~MainTimer();

public slots:
    void myfunction();

private slots:
    void on_pauseResume_clicked();

private:
    Ui::MainTimer *ui;
    QTimer *timer;
    QTime current_time;
};

#endif // MAINTIMER_H
