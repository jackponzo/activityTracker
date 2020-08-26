//
// Created by Giacomo Ponzuoli on 26/08/2020.
//

#ifndef ACTIVITYTRACKER_NEWACTIVITYWINDOW_H
#define ACTIVITYTRACKER_NEWACTIVITYWINDOW_H

#include <QtWidgets/QDialog>

class NewActivityWindow : public QDialog {

    Q_OBJECT

public:
    NewActivityWindow(QWidget *parent = nullptr);
    ~NewActivityWindow();

};


#endif //ACTIVITYTRACKER_NEWACTIVITYWINDOW_H
