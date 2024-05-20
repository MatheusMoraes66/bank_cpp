#include "../headers/Account.hpp"
#include <iostream>
#include <string>

int Account::lenght = 0;

Account::Account(Status status, Customer customer) :
                                                     customer(customer),
                                                     status(status),
                                                     currentBalance(0)
{
    this->number = 393;
    this->accountId = lenght++;
    this->lenght++;
}

Account::~Account()
{
    this->lenght--;
}

void Account::deposit(float amount)
{
    if (this->status != Status::ACTIVE)
    {
        std::cout << "Essa conta não pode fazer essa operação." << std::endl;
    }
    this->currentBalance += amount;
}

void Account::withdraw(float amount)
{
    if (this->status != Status::ACTIVE)
    {
        std::cout << "Operação Bloqueada" << std::endl;
        std::cout << "Essa conta não pode fazer essa operação." << std::endl;
    }

    if (this->currentBalance < amount)
    {
        std::cout << "Operação Bloqueada" << std::endl;
        std::cout << "O valor do saque é maior que o valor em conta." << std::endl;
    }

    this->currentBalance -= amount;
}
