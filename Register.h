//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H

#include <map>

#include "Activity.h"

class Register {

public:
    Register();
    ~Register();

    void addActivity(Activity a);
    void deleteActivity(Activity a);
    bool isEmpty();

private:
    std::multimap<QDate, Activity> activities;
};


#endif //ACTIVITYTRACKER_REGISTER_H
