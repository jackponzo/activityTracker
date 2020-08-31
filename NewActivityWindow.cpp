//
// Created by Giacomo Ponzuoli on 26/08/2020.
//

#include "NewActivityWindow.h"

NewActivityWindow::NewActivityWindow(QWidget *parent) : QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
{
    //grandezza pagina
    this->setFixedSize(500,625);

    //label newActivityLabel
    labelNewActivity = new QLabel("New Activity",this);
    labelNewActivity->setFixedWidth(400);

    QFont fontLabelNewActivity("Arial", 15, QFont::Bold);
    labelNewActivity->setFont(fontLabelNewActivity);
    labelNewActivity->move(170,30);
    labelNewActivity->setStyleSheet("* { color:red }");

    //label della data in cui inserire l'attività
    labelDate = new QLabel("Date: ", this);

    QFont fontLabelDate("Arial", 11);
    labelDate->setFont(fontLabelDate);
    labelDate->move(10, 100);

    //scelta della data per inserire una nuova attività
    dateEditNewActivity = new QDateEdit(QDate::currentDate(), this);
    dateEditNewActivity->setDisplayFormat("dd/MM/yyyy");
    dateEditNewActivity->setFixedWidth(150);

    QFont fontDateEdit("Arial", 10);
    dateEditNewActivity->setFont(fontDateEdit);
    dateEditNewActivity->move(135,98);


    //label per l'orario d'inizio
    labelStartTime = new QLabel("Starting time: ", this);

    QFont fontLabelStartTime("Arial", 11);
    labelStartTime->setFont(fontLabelStartTime);
    labelStartTime->move(10, 150);

    //scelta orario d'inizio della nuova attività
    timeEditStartTime = new QTimeEdit(QTime::currentTime(), this);
    timeEditStartTime->setFixedWidth(70);

    QFont fontTimeEdit("Arial", 10);
    timeEditStartTime->setFont(fontTimeEdit);
    timeEditStartTime->move(135,148);

    //label per l'orario di fine
    labelEndTime = new QLabel("End time: ", this);

    QFont fontLabelEndTime("Arial", 11);
    labelEndTime->setFont(fontLabelEndTime);
    labelEndTime->move(10,200);

    //scelta orario di fine della nuova attività
    timeEditEndTime = new QTimeEdit(QTime::currentTime(), this);
    timeEditEndTime->setFixedWidth(70);
    timeEditEndTime->setFont(fontTimeEdit);
    timeEditEndTime->move(135, 198);

    //label titolo della nuova attivita'
    labelTitleActivity = new QLabel("Title activity: ", this);

    QFont fontLabelTitleActivity("Arial", 11);
    labelTitleActivity->setFont(fontLabelTitleActivity);
    labelTitleActivity->move(10,250);

    //scelta titolo della nuova attività
    lineEditTitleActivity = new QLineEdit(this);
    lineEditTitleActivity->setFixedWidth(250);

    QFont fontLineEditTitleActivity("Arial", 10);
    lineEditTitleActivity->setFont(fontLineEditTitleActivity);
    lineEditTitleActivity->move(135, 248);

    //label descrizione della nuova attività
    labelDescriptionActivity = new QLabel("Description activity: ", this);

    QFont fontLabelDescriptionActivity("Arial", 11);
    labelDescriptionActivity->setFont(fontLabelDescriptionActivity);
    labelDescriptionActivity->move(10, 300);

    //scelta descrizione della nuova attività
    textEditDescriptionActivity = new QTextEdit(this);
    textEditDescriptionActivity->setFixedSize(480, 200);

    QFont fontTextEditDescriptionActivity("Arial", 10);
    textEditDescriptionActivity->setFont(fontTextEditDescriptionActivity);
    textEditDescriptionActivity->move(10,325);


    //bottone ok
    buttonOk = new QPushButton("Ok", this);
    buttonOk->setFixedSize(40,40);

    QFont fontButtonOk("Arial", 10);
    buttonOk->setFont(fontButtonOk);
    buttonOk->move(450,575);

    //bottone cancel
    buttonCancel = new QPushButton("Cancel", this);
    buttonCancel->setFixedSize(70, 40);


    QFont fontButtonCancel("Arial", 10);
    buttonCancel->setFont(fontButtonCancel);
    buttonCancel->move(370,575);
    connect(buttonCancel, &QPushButton::clicked, this, [this](){this->close();} );

};

NewActivityWindow::~NewActivityWindow(){
    delete labelNewActivity,
    delete labelDate;
    delete dateEditNewActivity;
    delete labelStartTime;
    delete timeEditStartTime;
    delete labelEndTime;
    delete timeEditEndTime;
    delete labelTitleActivity;
    delete lineEditTitleActivity;
    delete buttonOk;
    delete buttonCancel;

}