#include "../../headers/employee/Teller.hpp"

Teller::Teller(std::string firstName, std::string lastName, std::string dateOfBirth,
               std::string email, std::string phoneNumber, const Address &address)
    : Employee(firstName, lastName, dateOfBirth, email, phoneNumber, address)
{
}
