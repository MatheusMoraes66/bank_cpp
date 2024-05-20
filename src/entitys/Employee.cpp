#include "../headers/Employee.hpp"

int Employee::lenght = 0;

Employee::Employee(
    std::string responsibility, 
    std::string firstName, 
    std::string lastName, 
    std::string dateOfBirth, 
    std::string email, 
    std::string phoneNumber,
    const Address& address): 
Person(firstName, lastName, dateOfBirth, email, phoneNumber,address),
responsibility(responsibility)
{
    this->employeeId = lenght++;
    this->lenght++;
}

Employee::~Employee() {
     this->lenght--;
}

std::string Employee::getFullName() 
{
    return this->Person::firstName + " " + this->Person::lastName;
}
