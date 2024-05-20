#pragma once
#include "./Person.hpp"

class Customer : public Person
{
public:
    static int lenght;
private:
    int customerId;
public:
    Customer(
        std::string firstName, 
        std::string lastName, 
        std::string dateOfBirth, 
        std::string email, 
        std::string phoneNumber,
        const Address& address
    );
    ~Customer();
    std::string getFullName();
};