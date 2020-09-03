//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#include "Activity.h"
#include <iostream>

Activity::Activity( QString t, QString d, QDate da, QTime sT, QTime eT) :  title(t), description(d), date(da), startTime(sT), endTime(eT) { }

const QString &Activity::getTitle() const {
    return title;
}

void Activity::setTitle(const QString &title) {
    Activity::title = title;
}

const QString &Activity::getDescription() const {
    return description;
}

void Activity::setDescription(const QString &description) {
    Activity::description = description;
}

const QDate &Activity::getDate() const {
    return date;
}

void Activity::setDate(const QDate &date) {
    Activity::date = date;
}

const QTime &Activity::getStartTime() const {
    return startTime;
}

void Activity::setStartTime(const QTime &startTime) {
    Activity::startTime = startTime;
}

const QTime &Activity::getEndTime() const {
    return endTime;
}

void Activity::setEndTime(const QTime &endTime) {
    Activity::endTime = endTime;
}

bool Activity::operator==(const Activity &rhs) const {

    return title == rhs.getTitle() &&
           description == rhs.getDescription() &&
           date == rhs.getDate() &&
           startTime.hour() == rhs.startTime.hour() &&
           startTime.minute() == rhs.startTime.minute() &&
           endTime.hour() == rhs.endTime.hour() &&
           endTime.minute() == rhs.endTime.minute();

}

bool Activity::operator!=(const Activity &rhs) const {
    return !(rhs == *this);
}

