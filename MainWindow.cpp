//
// Created by Giacomo Ponzuoli on 24/08/2020.
//

#include <QtWidgets/QGridLayout>
#include <QtGui/QTextCharFormat>
#include <QtWidgets/QLabel>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QSpinBox>
#include <QtGui/QTextTableCell>
#include <QtWidgets/QPushButton>
#include <iostream>


#include "MainWindow.h"
#include "NewActivityWindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(600,600); //non posso modificare la grandezza della finestra

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

    //bottone "nuova attivita'"
    buttonNewActivity = new QPushButton("New Activity", this);
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
    std::cout << "Window New Activity";
    NewActivityWindow prova;
    prova.exec();
}

