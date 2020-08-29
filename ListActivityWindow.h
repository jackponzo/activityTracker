//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#ifndef ACTIVITYTRACKER_LISTACTIVITYWINDOW_H
#define ACTIVITYTRACKER_LISTACTIVITYWINDOW_H

#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtCore/QDate>


class ListActivityWindow : public QDialog {

    Q_OBJECT

public:
    ListActivityWindow(QWidget *parent = nullptr, QDate date = QDate::currentDate());
    ~ListActivityWindow();

private:
    QLabel *labelListActivity;
    QLabel *labelDate;


};


#endif //ACTIVITYTRACKER_LISTACTIVITYWINDOW_H
