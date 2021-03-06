#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mainscreen.h"
#include <QTimer>
#include "ThrInput.h"
#include "ThrAlarm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setOxygenValue(double value);
    void setDateTime(QDateTime dateTime);    
    void setDateTimeToThread(QDateTime dateTime);

private slots:
    void initApp();
    void setRandomValue();
private:
    Ui::MainWindow *ui;
    MainScreen *main_screen = nullptr;
    QTimer timer;

    ThrInput thrInput;
    ThrAlarm thrAlarm;
};
#endif // MAINWINDOW_H
