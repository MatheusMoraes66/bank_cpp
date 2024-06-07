#pragma once
#include "Employee.hpp"

class Teller: public Employee
{
    Teller(std::string firstName,std::string lastName,std::string dateOfBirth,
    std::string email,std::string phoneNumber, const Address& address);
};
