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
    Person person;
// Atributos
private:
    int id;
    int number;
    std::string dateOpened;
    std::string dateClosed;
    float currentBalance;
    Status status;
// Metodos
public:
    Account(Status status, const Person& person);
    ~Account();
};