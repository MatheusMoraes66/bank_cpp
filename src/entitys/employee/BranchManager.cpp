#include "../../headers/employee/BranchManager.hpp"

BranchManager::BranchManager(std::string firstName, std::string lastName, std::string dateOfBirth,
                             std::string email, std::string phoneNumber, const Address &address)
    : Employee(firstName, lastName, dateOfBirth, email, phoneNumber, address)
{
}
