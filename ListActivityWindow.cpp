//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#include "ListActivityWindow.h"

ListActivityWindow::ListActivityWindow(QWidget *parent, QDate date, Register *r) : QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint) {

    this->setFixedSize(500,500);

    //label list activity
    labelListActivity = new QLabel("List Activity", this);

    QFont fontLabelListActivity("Arial", 15, QFont::Bold);
    labelListActivity->setFont(fontLabelListActivity);
    labelListActivity->move(175 ,40);
    labelListActivity->setStyleSheet("* { color:red }");

    //label Date
    QString s = "Date:   ";
    s += QString(date.toString("dd/MM/yyyy"));
    labelDate = new QLabel(s, this);

    QFont fontLabelDate("Arial", 11);
    labelDate->setFont(fontLabelDate);
    labelDate->move(10,100);

    QFont fontLabel("Arial", 10);
    QFont fontTitle("Arial", 11, QFont::Bold);

    if(r->getActivities().find(date) == r->getActivities().end()){ //se non ci sono attività
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
        QLabel *labelStartTime, *labelEndTime, *labelDescription;

        int i = 0;
        for (const auto it : r->getActivities()) {

            if(it.first == date) {
                groupBox = new QGroupBox(it.second->getTitle()); //titolo
                groupBox->setStyleSheet("QGroupBox{ font: 11pt 'Arial' bold;  }");

                vbox = new QVBoxLayout;

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
                labelDescription = new QLabel("Description:\n" + it.second->getDescription());
                labelDescription->setWordWrap(true);
                labelDescription->setMaximumWidth(412);
                labelDescription->setFont(fontLabel);
                vbox->addWidget(labelDescription);

                //button delete
                buttonDelete = new QPushButton((QIcon("../image/deleteActivity.png")), "");
                buttonDelete->setFixedSize(32, 32);
                connect(buttonDelete, &QPushButton::clicked, this, [this, groupBox, r, it, date]() {
                    r->deleteActivity(it.second);

                    delete groupBox;
                    if (r->getActivities().find(date) == r->getActivities().end()) {
                        delete this->scrollAreaListActivity;
                        this->createEmptyLabel();
                    }

                });
                vbox->addWidget(buttonDelete);

                groupBox->setLayout(vbox);

                gridLayout->addWidget(groupBox, i++, 0);
            }//fine if

        } //fine for
        scrollAreaListActivity->setWidget(qWidget);
    } //fine else

} //fine costruttore

ListActivityWindow::~ListActivityWindow() {
    delete labelListActivity;
    delete labelDate;
}

void ListActivityWindow::createEmptyLabel() {

    QLabel *empty = new QLabel("There aren't activities for this date.", this);
    QFont fontEmpty("Arial", 12, QFont::Bold);
    empty->setFont(fontEmpty);
    empty->setStyleSheet("*{ color : red; }");
    empty->move(80,250);
}


