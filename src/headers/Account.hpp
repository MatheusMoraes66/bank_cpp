#pragma once
#include "Person.hpp"

class Account
{
public:
    static int lenght;
    enum Status {
        ACTIVE,
        SUSPENDED,
        CLOSED
    };
// Atributos
private:
    int accountId;
    int number;
    std::string dateOpened;
    std::string dateClosed;
    float currentBalance;
    Status status;
// Metodos
public:
    Account(Status status);
    void deposit(float amount);
    void withdraw(float amount);
    ~Account();
};
