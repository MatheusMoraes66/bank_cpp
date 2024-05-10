#pragma once
#include <string>

class Address
{
public:
    static int lenght;
private:
    int addressId;
    std::string street;
    std::string city;
    std::string state;
    std::string postalCode;
    std::string country;
    int number;
public:
    Address(std::string street, std::string city, std::string state, std::string postalCode, std::string country, int number);
    ~Address();
    std::string getAddress();
};
