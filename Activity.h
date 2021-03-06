//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#ifndef ACTIVITYTRACKER_ACTIVITY_H
#define ACTIVITYTRACKER_ACTIVITY_H


#include <QtCore/QString>
#include <QtCore/QDate>

class Activity {

public:

    Activity(QString t, QString d, QDate da, QTime sT, QTime eT);
    ~Activity() {}

    const QString &getTitle() const;
    void setTitle(const QString &title);

    const QString &getDescription() const;
    void setDescription(const QString &description);

    const QDate &getDate() const;
    void setDate(const QDate &date);

    const QTime &getStartTime() const;
    void setStartTime(const QTime &startTime);

    const QTime &getEndTime() const;
    void setEndTime(const QTime &endTime);

    bool operator==(const Activity &rhs) const;
    bool operator!=(const Activity &rhs) const;

private:

    QString title;
    QString description;
    QDate date;
    QTime startTime;
    QTime endTime;

};


#endif //ACTIVITYTRACKER_ACTIVITY_H
