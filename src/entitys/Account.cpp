#include "../headers/Account.hpp"
#include <iostream>
#include <string>

int Account::lenght = 0;

Account::Account(Status status) : 
    status(status),
    currentBalance(0)
{
    this->number = 393;
    this->lenght++;
}

Account::~Account()
{
    this->lenght--;
}


