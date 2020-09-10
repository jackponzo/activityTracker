//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H

#include <map>
#include <iostream>

#include "Activity.h"

class Register {

public:
    Register();
    ~Register();

    void addActivity(const Activity& a);
    bool deleteActivity(const Activity& a);
    bool isEmpty();
    bool isNotActivity(const QDate &date);
    int numActivity();
    const std::multimap<QDate, Activity> &getActivities() const;

private:
    std::multimap<QDate, Activity> activities;
};


#endif //ACTIVITYTRACKER_REGISTER_H
