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

class NewActivityWindow : public QDialog {

    Q_OBJECT

public:
    NewActivityWindow(QWidget *parent = nullptr);
    ~NewActivityWindow();

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
