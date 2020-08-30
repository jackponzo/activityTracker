//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#include "Activity.h"

Activity::Activity(QString n, QString t, QString d, QDate da, QTime sT, QTime eT) : name(n), title(t), date(da), startTime(sT), endTime(eT) { }

Activity::~Activity() { }

const QString &Activity::getName() const {
    return name;
}

void Activity::setName(const QString &name) {
    Activity::name = name;
}

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
    return name == rhs.name &&
           title == rhs.title &&
           description == rhs.description &&
           date == rhs.date &&
           startTime == rhs.startTime &&
           endTime == rhs.endTime;
}

bool Activity::operator!=(const Activity &rhs) const {
    return !(rhs == *this);
}

