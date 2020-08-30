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


#include <iostream>

class ListActivityWindow : public QDialog {

    Q_OBJECT

public:
    ListActivityWindow(QWidget *parent = nullptr, QDate date = QDate::currentDate());
    ~ListActivityWindow();


private slots:
    void prov(int i);


private:
    QLabel *labelListActivity;
    QLabel *labelDate;

    QScrollArea *scrollAreaListActivity;

    QWidget *qWidget;
};


#endif //ACTIVITYTRACKER_LISTACTIVITYWINDOW_H
