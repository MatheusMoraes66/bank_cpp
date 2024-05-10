#pragma once
#include <string>
#include "./Address.hpp"

class Person
{
public:
    static int lenght;
private:
    int personId;
    std::string firstName;
    std::string lastName;
    std::string dateOfBirth;
    std::string email;
    std::string phoneNumber;
    Address address;
public:
    Person(std::string firstName, 
    std::string lastName, 
    std::string dateOfBirth, 
    std::string email,
    std::string phoneNumber,
    const Address& address);
    ~Person();
    int getId();
};
