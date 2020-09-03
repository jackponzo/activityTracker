//
// Created by Giacomo Ponzuoli on 03/09/2020.
//
#include "gtest/gtest.h"

#include "../Register.h"

TEST(TestRegister, testRegisterIsEmpty){
    Register *r = new Register();
    ASSERT_TRUE(r->isEmpty());
}

TEST(TestRegister, testRegisterIsNotEmpty){
    Register *r = new Register();
    r->addActivity(new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00)));
    ASSERT_FALSE(r->isEmpty());
}

TEST(TestRegister, testRegisterInsert){
    Register *r = new Register();
    Activity *a = new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    r->addActivity(a);
    ASSERT_FALSE(r->isEmpty());
}

TEST(TestRegister, testRegisterDelete){
    Register *r = new Register();
    Activity *a = new Activity("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    r->addActivity(a);
    r->deleteActivity(a);
    ASSERT_TRUE(r->isEmpty());
}

