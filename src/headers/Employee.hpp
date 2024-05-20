#pragma once
#include "./Person.hpp"

class Employee : public Person
{
public:
    static int lenght;
private:
    int employeeId;
    std::string responsibility;
public:
    Employee(
        std::string responsibility,
        std::string firstName, 
        std::string lastName, 
        std::string dateOfBirth, 
        std::string email, 
        std::string phoneNumber,
        const Address& address);
    std::string getFullName();
    ~Employee();
};