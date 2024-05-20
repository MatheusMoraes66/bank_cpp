#include "../headers/Customer.hpp"

int Customer::lenght = 0;

Customer::Customer(
    std::string firstName, 
    std::string lastName, 
    std::string dateOfBirth, 
    std::string email, 
    std::string phoneNumber,
    const Address& address): 
Person(firstName, lastName, dateOfBirth, email, phoneNumber,address) 
{
    this->customerId = lenght++;
    this->lenght++;
}

Customer::~Customer() {
     this->lenght--;
}

std::string Customer::getFullName()
{
    return this->Person::firstName + " " + this->Person::lastName;
}