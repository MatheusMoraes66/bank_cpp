#include "../headers/Person.hpp"
#include <iostream>
#include <string>

int Person::lenght = 0;

Person::Person(std::string firstName,
               std::string lastName,
               std::string dateOfBirth,
               std::string email,
               std::string phoneNumber,
               const Address& address) : firstName(firstName),
                                            lastName(lastName),
                                            dateOfBirth(dateOfBirth),
                                            email(email),
                                            phoneNumber(phoneNumber),
                                            address(address)
{
    this->personId = lenght++;
    this->lenght++;
}

Person::~Person()
{
    this->lenght--;
}

int Person::getId()
{
    return this->personId;
}
