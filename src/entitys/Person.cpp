#include "../headers/Person.hpp"
#include <iostream>
#include <string>

int Person::lenght = 0;

Person::Person(std::string firstName,
               std::string lastName,
               std::string dateOfBirth,
               std::string email,
               std::string phoneNumber,
               std::string address,
               std::string taxIdentifier) : firstName(firstName),
                                            lastName(lastName),
                                            dateOfBirth(dateOfBirth),
                                            email(email),
                                            phoneNumber(phoneNumber),
                                            address(address),
                                            taxIdentifier(taxIdentifier)
{
    this->id = lenght++;
    this->lenght++;
}

Person::~Person()
{
    this->lenght--;
}

std::string Person::getFullName()
{
    return this->firstName + " " + this->lastName;
}

int Person::getId()
{
    return this->id;
}
