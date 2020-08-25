//
// Created by Giacomo Ponzuoli on 24/08/2020.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    QCalendarWidget *calendar;
    QPushButton *buttonNewActivity;
    QLabel *labelActivityTracker;
};
#endif // MAINWINDOW_H
