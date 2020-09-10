//
// Created by Giacomo Ponzuoli on 30/08/2020.
//

#include "Register.h"

Register::Register() {

}

Register::~Register() {

}

void Register::addActivity(const Activity& a) {
    activities.insert(std::pair<QDate, Activity>(a.getDate(), a));
}

bool Register::deleteActivity(const Activity& a) {

    typedef std::multimap<QDate, Activity>::iterator iterator;
    std::pair<iterator, iterator> iterpair = activities.equal_range(a.getDate());

    iterator it = iterpair.first;
    for (; it != iterpair.second; ++it) {
        if (it->second == a) {
            activities.erase(it);
            return true;
        }
    }
    return false;
}

bool Register::isNotActivity(const QDate &date) {
    if(activities.find(date) == activities.end())
        return true;
    return false;
}

const std::multimap<QDate, Activity> &Register::getActivities() const {
    return activities;
}

int Register::numActivity() {
    return activities.size();
}

bool Register::isEmpty() {
    if(activities.empty())
        return true;
    return false;
}

int Register::numActivityDate(const QDate &date) {
    int num = 0;
    for(auto it : activities)
        if(it.first ==date)
            num++;
    return num;
}


