//
// Created by Giacomo Ponzuoli on 26/08/2020.
//

#ifndef ACTIVITYTRACKER_NEWACTIVITYWINDOW_H
#define ACTIVITYTRACKER_NEWACTIVITYWINDOW_H

#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QMessageBox>

#include <iostream>

#include "Register.h"

class NewActivityWindow : public QDialog {

    Q_OBJECT

public:
    NewActivityWindow(QWidget *parent = nullptr, Register *r = nullptr);
    ~NewActivityWindow();
    bool activityIsOk(QDateEdit *date, QTimeEdit *sT, QTimeEdit* eT, QLineEdit* title, QTextEdit *description );

private:
    QLabel *labelNewActivity;
    QLabel *labelDate;
    QLabel *labelStartTime;
    QLabel *labelEndTime;
    QLabel *labelTitleActivity;
    QLabel *labelDescriptionActivity;

    QDateEdit *dateEditNewActivity;
    QTimeEdit *timeEditStartTime;
    QTimeEdit *timeEditEndTime;

    QLineEdit *lineEditTitleActivity;

    QTextEdit *textEditDescriptionActivity;

    QPushButton *buttonOk;
    QPushButton *buttonCancel;
};


#endif //ACTIVITYTRACKER_NEWACTIVITYWINDOW_H
