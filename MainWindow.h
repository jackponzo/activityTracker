//
// Created by Giacomo Ponzuoli on 24/08/2020.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QPushButton>

#include "NewActivityWindow.h"
#include "ListActivityWindow.h"
#include "Register.h"


class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void clickedNewActivity();
    void clickedListActivity(QDate date);

private:
    QCalendarWidget *calendar;
    QPushButton *buttonNewActivity;
    QLabel *labelActivityTracker;

    Register *aRegister;
};
#endif // MAINWINDOW_H
