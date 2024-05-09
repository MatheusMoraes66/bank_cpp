#pragma once
#include <string>

class Person
{
public:
    static int lenght;
private:
    int id;
    std::string firstName;
    std::string lastName;
    std::string dateOfBirth;
    std::string email;
    std::string phoneNumber;
    std::string address;
    std::string taxIdentifier;
public:
    Person(std::string firstName, 
    std::string lastName, 
    std::string dateOfBirth, 
    std::string email,
    std::string phoneNumber,
    std::string address,
    std::string taxIdentifier);
    ~Person();
    std::string getFullName();
    int getId();
};
