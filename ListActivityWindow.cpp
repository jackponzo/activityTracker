//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#include <QtWidgets/QTextEdit>
#include "ListActivityWindow.h"

ListActivityWindow::ListActivityWindow(QWidget *parent, QDate date, Register *r) : QDialog(parent,  Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint) {

    this->setFixedSize(500,500);

    //label list activity
    labelListActivity = new QLabel("List Activity", this);

    QFont fontLabelListActivity("Arial", 15, QFont::Bold);
    labelListActivity->setFont(fontLabelListActivity);
    labelListActivity->move(175 ,40);
    labelListActivity->setStyleSheet("* { color:red }");

    Activity *a1 = new Activity("Nome1", "Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity *a2 = new Activity("Nome2", "Titolo2", "Descrizione2" ,QDate(2020,9,2), QTime(13,00), QTime(14,00));
    Activity *a3 = new Activity("Nome3", "Titolo3", "Descrizione molto più lunga per testare il multi linea. Oggi ho fatto molto sport." ,QDate(2020,10,02), QTime(14,00), QTime(15,00));


    //r->addActivity(a1);
    //r->addActivity(a2);
    //r->addActivity(a3);

    std::cout << r->getActivities().size() << std::endl;

    //label Date
    QString s = "Date:   ";
    s += QString(date.toString("dd/MM/yyyy"));
    labelDate = new QLabel(s, this);

    QFont fontLabelDate("Arial", 11);
    labelDate->setFont(fontLabelDate);
    labelDate->move(10,100);

    QFont fontLabel("Arial", 10);
    QFont fontTitle("Arial", 11, QFont::Bold);

    if(r->isEmpty()){ //se non ci sono attività
        createEmptyLabel();
    }else {

        //scroll area
        scrollAreaListActivity = new QScrollArea(this);
        scrollAreaListActivity->setFixedSize(480, 350);
        scrollAreaListActivity->move(10, 140);
        scrollAreaListActivity->setWidgetResizable(true);
        scrollAreaListActivity->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        qWidget= new QWidget(this);

        QGridLayout *gridLayout = new QGridLayout(qWidget);

        QGroupBox *groupBox;
        QVBoxLayout *vbox;
        QPushButton *buttonDelete;
        QString stringDate, stringStartTime, stringEndTime;
        QLabel *labelDate, *labelStartTime, *labelEndTime, *labelDescription;

        int i = 0;
        for (const auto it : r->getActivities()) {


            groupBox = new QGroupBox(it.second->getTitle()); //titolo
            groupBox->setStyleSheet("QGroupBox{ font: 11pt 'Arial' bold;  }");

            vbox = new QVBoxLayout;

            //label Date
            stringDate = "Date: ";
            stringDate += QString(it.second->getDate().toString("dd/MM/yyyy"));
            labelDate = new QLabel(stringDate);
            labelDate->setFont(fontLabel);
            vbox->addWidget(labelDate);

            //label ora di inizio
            stringStartTime = "Starting time: ";
            stringStartTime += QString(it.second->getStartTime().toString("hh:mm"));
            labelStartTime = new QLabel(stringStartTime);
            labelStartTime->setFont(fontLabel);
            vbox->addWidget(labelStartTime);

            //label ora di fine
            stringEndTime = "End time: ";
            stringEndTime += QString(it.second->getEndTime().toString("hh:mm"));
            labelEndTime = new QLabel(stringEndTime);
            labelEndTime->setFont(fontLabel);
            vbox->addWidget(labelEndTime);

            //label descrizione
            QTextEdit *prova;
            labelDescription = new QLabel(it.second->getDescription());
            labelDescription->setWordWrap(true);
            labelDescription->setMaximumWidth(412);
            labelDescription->setFont(fontLabel);
            vbox->addWidget(labelDescription);

            //button delete
            buttonDelete = new QPushButton((QIcon("../image/deleteActivity.png")), "");
            buttonDelete->setFixedSize(32, 32);
            connect(buttonDelete, &QPushButton::clicked, this, [this, groupBox, r, it]() {
                r->deleteActivity(it.second);
                std::cout << r->getActivities().size() << std::endl;

                delete groupBox;
                if(r->isEmpty()) {
                    delete this->scrollAreaListActivity;
                    this->createEmptyLabel();
                }

            });
            vbox->addWidget(buttonDelete);


            groupBox->setLayout(vbox);

            gridLayout->addWidget(groupBox, i++,0);

        } //fine for
        scrollAreaListActivity->setWidget(qWidget);
    } //fine else

} //fine costruttore

ListActivityWindow::~ListActivityWindow() {
    delete labelListActivity;
    delete labelDate;
}

void ListActivityWindow::createEmptyLabel() {
    std::cout << "Vuoto" << std::endl;
    QLabel *empty = new QLabel("There aren't activities for this date.", this);
    QFont fontEmpty("Arial", 12, QFont::Bold);
    empty->setFont(fontEmpty);
    empty->setStyleSheet("*{ color : red; }");
    empty->move(80,250);
}


