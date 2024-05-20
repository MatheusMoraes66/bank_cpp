#include "../headers/Person.hpp"
#include <iostream>
#include <string>

int Person::lenght = 0;

Person::Person(std::string firstName,
               std::string lastName,
               std::string dateOfBirth,
               std::string email,
               std::string phoneNumber,
               const Address& address) :
               address(address), 
               firstName(firstName),
               lastName(lastName),
               dateOfBirth(dateOfBirth),
               email(email),
               phoneNumber(phoneNumber)
                                            
{
    this->personId = lenght++;
    this->lenght++;
}

Person::~Person()
{
    this->lenght--;
}

