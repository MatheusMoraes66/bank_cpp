#include "../../headers/account/Account.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

int Account::lenght = 0;

Account::Account(Status status, Customer customer)
    :customer(customer),balance(0),status(status)
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
    try
        {
            validStatusAccount(this->status);
            this->balance += amount;
        }
    catch (const std::exception &e)
        {
            std::cerr << "Erro ocorrido: " << e.what() << std::endl;
            return;
        }
}

void Account::withdraw(float amount)
{
    try
        {
            validStatusAccount(this->status);

            if (this->balance < amount)
            {
                throw std::runtime_error("Operação Bloqueada - [Saldo Insuficiente]");
            }
            float fee = withdrawalFee();
            this->balance -= amount - fee;
        }
    catch (const std::exception &e)
        {
            std::cerr << "Erro ocorrido: " << e.what() << std::endl;
            return;
        }
}

float Account::currentBalance() const
{
    return this->balance;
}

void Account::validStatusAccount(Status status) const
{
    switch (status)
    {
        case Status::ACTIVE:
            std::cout << "Operação Liberada..." << std::endl;
            break;
        case Status::CLOSED:
            throw std::runtime_error("Operação Bloqueada - [Conta Fechada]");
        case Status::SUSPENDED:
            throw std::runtime_error("Operação Bloqueada - [Conta Suspensa]");
        default:
            throw std::runtime_error("Essa conta não pode fazer essa operação.");
    }
}
