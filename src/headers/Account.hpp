#pragma once
#include "Customer.hpp"

class Account
{
public:
    static int lenght;
    enum Status {
        ACTIVE,
        SUSPENDED,
        CLOSED
    };
    Customer customer;
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
    Account(Status status, Customer customer);
    ~Account();
    void deposit(float amount);
    void withdraw(float amount);
};
