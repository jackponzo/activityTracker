//
// Created by Giacomo Ponzuoli on 24/08/2020.
//

#include <iostream>

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(600,600); //non posso modificare la grandezza della finestra

    aRegister = new Register();

    //label "Activity Tracker"
    labelActivityTracker = new QLabel("Activity Tracker",this);
    labelActivityTracker->setFixedWidth(400);

    QFont font("Arial", 15, QFont::Bold);
    labelActivityTracker->setFont(font);
    labelActivityTracker->move(200,40);
    labelActivityTracker->setStyleSheet("* { color:red }");

    //calendario
    calendar = new QCalendarWidget(this);
    calendar->resize(400,400);
    calendar->move(100,100);
    calendar->setGridVisible(true);
    connect(calendar, SIGNAL(clicked(QDate)), this, SLOT(clickedListActivity(QDate)));

    //bottone "nuova attivita'"
    buttonNewActivity = new QPushButton("New Activity", this);

    QFont fontButtonNewActivity("Arial", 10);
    buttonNewActivity->setFont(fontButtonNewActivity);
    buttonNewActivity->move(400,520);
    connect(buttonNewActivity, SIGNAL(clicked()), this, SLOT(clickedNewActivity()));

}

MainWindow::~MainWindow()
{
    delete calendar;
    delete buttonNewActivity;
    delete labelActivityTracker;
}

void MainWindow::clickedNewActivity() {
    NewActivityWindow newActivityWindow;
    newActivityWindow.setWindowTitle("New Activity");
    newActivityWindow.setWindowIcon(QIcon("../image/iconNewActivityWindow.png"));
    newActivityWindow.exec();
}

void MainWindow::clickedListActivity(QDate date) {

    ListActivityWindow listActivityWindow(nullptr, date, aRegister);
    listActivityWindow.setWindowTitle("List Activity");
    listActivityWindow.setWindowIcon(QIcon("../image/listActivityWindow.png"));

    listActivityWindow.exec();

}