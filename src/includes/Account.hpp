#pragma once
#include <iostream>
#include <string>

class Account
{
public:
    static int lenght;
private:
    std::string number;
    std::string titularName;
    float sale;
public:
    Account(std::string number, std::string name);
    ~Account();
    void withdraw(float value);
    void deposit(float value);

    float getSale();

    void setTitularName(std::string name);
    std::string getTitularName() const;

    void setNumber(std::string number);
    std::string getNumber() const;
};
