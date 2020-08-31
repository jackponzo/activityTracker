//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#ifndef ACTIVITYTRACKER_LISTACTIVITYWINDOW_H
#define ACTIVITYTRACKER_LISTACTIVITYWINDOW_H

#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtCore/QDate>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>
#include <QtCore/QSignalMapper>
#include <QtWidgets/QGroupBox>

#include "Register.h"

#include <iostream>

class ListActivityWindow : public QDialog {

    Q_OBJECT

public:
    ListActivityWindow(QWidget *parent = nullptr, QDate date = QDate::currentDate());
    ~ListActivityWindow();


private:
    QLabel *labelListActivity;
    QLabel *labelDate;

    QScrollArea *scrollAreaListActivity;

    QWidget *qWidget;

    Register *aRegister;
};


#endif //ACTIVITYTRACKER_LISTACTIVITYWINDOW_H
