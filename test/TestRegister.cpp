//
// Created by Giacomo Ponzuoli on 03/09/2020.
//
#include "gtest/gtest.h"

#include "../Register.h"

TEST(TestRegister, testRegisterIsEmpty){
    Register r;

    ASSERT_TRUE(r.isEmpty());
}

TEST(TestRegister, testRegisterIsNotEmpty){
    Register r;

    Activity a1("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a2("Titolo2", "Descrizione2" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a3("Titolo3", "Descrizione3" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));

    r.addActivity(a1);
    r.addActivity(a2);
    r.addActivity(a3);

    ASSERT_FALSE(r.isEmpty());
    ASSERT_EQ(3, r.numActivity());
}

TEST(TestRegister, testRegisterInsert){
    Register r;

    Activity a1("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a2("Titolo2", "Descrizione2" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a3("Titolo3", "Descrizione3" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a4("Titolo4", "Descrizione4" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));

    r.addActivity(a1);
    r.addActivity(a2);
    r.addActivity(a3);
    r.addActivity(a4);

    ASSERT_FALSE(r.isEmpty());
    ASSERT_EQ(4, r.numActivity());
}

TEST(TestRegister, testRegisterDeleteOk){
    Register r;

    Activity a1("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a2("Titolo2", "Descrizione2" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a3("Titolo3", "Descrizione3" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));

    r.addActivity(a1);
    r.addActivity(a2);
    r.addActivity(a3);

    ASSERT_TRUE(r.deleteActivity(a2));
    ASSERT_FALSE(r.isEmpty());
    ASSERT_EQ(2, r.numActivity());
}

TEST(TestRegister, testRegisterDeleteNotOk){
    Register r;

    Activity a1("Titolo1", "Descrizione1" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a2("Titolo2", "Descrizione2" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));
    Activity a3("Titolo3", "Descrizione3" ,QDate(2020,7,2), QTime(12,00), QTime(13,00));

    r.addActivity(a1);
    r.addActivity(a3);

    ASSERT_FALSE(r.deleteActivity(a2));
    ASSERT_FALSE(r.isEmpty());
    ASSERT_EQ(2, r.numActivity());
}
