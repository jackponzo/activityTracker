//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#include "Register.h"

Register::Register() {

}

Register::~Register() {

}

void Register::addActivity(Activity* a) {
    activities.insert(std::pair<QDate, Activity*>(a->getDate(), a));
}

void Register::deleteActivity(Activity* ac) {

    typedef std::multimap<QDate, Activity*>::iterator iterator;
    std::pair<iterator, iterator> iterpair = activities.equal_range(ac->getDate());

    iterator it = iterpair.first;
    for (; it != iterpair.second; ++it) {
        if (it->second == ac) {
            activities.erase(it);
            break;
        }
    }
}

bool Register::isEmpty() {
    if(activities.empty())
        return true;
    return false;
}

const std::multimap<QDate, Activity *> &Register::getActivities() const {
    return activities;
}

void Register::setActivities(const std::multimap<QDate, Activity *> &activities) {
    Register::activities = activities;
}


