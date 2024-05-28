#pragma once
#include "../Customer.hpp"

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
    float balance;
    Status status;
// Metodos
public:
    Account(Status status, Customer customer);
    virtual ~Account();
    void deposit(float amount);
    void withdraw(float amount);
    float currentBalance() const;
    void validStatusAccount(Status status) const;
    virtual float withdrawalFee() const = 0;
};
