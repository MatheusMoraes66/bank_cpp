#include "../headers/Account.hpp"
#include <iostream>
#include <string>

int Account::lenght = 0;

Account::Account(Status status, const Person& person) : 
    status(status),
    person(person),
    currentBalance(0)
{
    this->number = 393;
    this->lenght++;
}

Account::~Account()
{
    this->lenght--;
}


