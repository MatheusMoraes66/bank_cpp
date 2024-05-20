#pragma once
#include <string>
#include "./Address.hpp"

class Person
{
public:
    static int lenght;
    Address address;
protected:
    int personId;
    std::string firstName;
    std::string lastName;
    std::string dateOfBirth;
    std::string email;
    std::string phoneNumber;
public:
    Person(std::string firstName, 
    std::string lastName, 
    std::string dateOfBirth, 
    std::string email,
    std::string phoneNumber,
    const Address& address);
    ~Person();
};
