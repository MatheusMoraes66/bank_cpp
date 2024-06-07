#pragma once
#include "Employee.hpp"

class BranchManager : public Employee
{
    BranchManager(std::string firstName, std::string lastName, std::string dateOfBirth,
    std::string email,std::string phoneNumber,const Address& address);
};
