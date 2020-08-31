//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#include "ListActivityWindow.h"

ListActivityWindow::ListActivityWindow(QWidget *parent, QDate date) : QDialog(parent,  Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint) {

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

    //scroll area
    scrollAreaListActivity = new QScrollArea(this);
    scrollAreaListActivity->setFixedSize(480, 350);
    scrollAreaListActivity->move(10, 140);
    scrollAreaListActivity->setWidgetResizable(true);

    qWidget= new QWidget(this);

    QGridLayout *gridLayout = new QGridLayout(qWidget);

    for(int i = 0; i<100;i++) {
        Activity a;

        QGroupBox *groupBox = new QGroupBox(tr("Prova"));

        QVBoxLayout *vbox = new QVBoxLayout;

        QPushButton *p = new QPushButton((QIcon("../image/deleteActivity.png")), "");
        p->setFixedSize(32,32);

        QString s = "Indice: ";
        s+= QString::number(i);

        QLabel *l = new QLabel(s);

        connect(p, &QPushButton::clicked, this, [this, a, i, groupBox](){ std::cout << "Indice: " << i << std::endl; delete groupBox; } );

        vbox->addWidget(l);
        vbox->addWidget(p);
        groupBox->setLayout(vbox);

        gridLayout->addWidget(groupBox, i,3);

    }

    scrollAreaListActivity->setWidget(qWidget);

}

ListActivityWindow::~ListActivityWindow() {
    delete labelListActivity;
    delete labelDate;
}


