//
// Created by Giacomo Ponzuoli on 02/09/2020.
//
#include "gtest/gtest.h"

#include <iostream>

#include "../Activity.h"

TEST(TestActivity, testActivityNotEqual) {
    Activity *a1 = new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00)); //titolo1
    Activity *a2 = new Activity("Titolo2", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00)); //titolo2
    ASSERT_FALSE(a1->operator==(*a2));
}

TEST(TestActivity, testActivityEqual) {
    Activity *a1 = new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00)); //titolo1
    Activity *a2 = new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00)); //titolo1

    ASSERT_TRUE(a1->operator==(*a2));
}
