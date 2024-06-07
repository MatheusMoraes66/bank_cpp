#pragma once
#include "../Person.hpp"

class Employee : public Person
{
public:
    static int lenght;
private:
    int employeeId;
public:
    Employee(std::string firstName, std::string lastName, std::string dateOfBirth,
    std::string email, std::string phoneNumber, const Address& address);
    ~Employee();
    std::string getFullName();
};
