//
// Created by Giacomo Ponzuoli on 29/08/2020.
//

#include "ListActivityWindow.h"

ListActivityWindow::ListActivityWindow(QWidget *parent, QDate date) : QDialog(parent ) {

    this->setFixedSize(500,500);

    //label list activity
    labelListActivity = new QLabel("List Activity", this);

    QFont fontLabelListActivity("Arial", 15, QFont::Bold);
    labelListActivity->setFont(fontLabelListActivity);
    labelListActivity->move(175 ,40);
    labelListActivity->setStyleSheet("* { color:red }");

    //labelDate
    QString s = "Date:   ";
    s += QString(date.toString("dd/MM/yyyy"));
    labelDate = new QLabel(s, this);

    QFont fontLabelDate("Arial", 11);
    labelDate->setFont(fontLabelDate);
    labelDate->move(10,100);


}

ListActivityWindow::~ListActivityWindow() {
    delete labelListActivity;
}