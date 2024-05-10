#include "../headers/Address.hpp"

int Address::lenght = 0;

Address::Address(
    std::string street,
    std::string city,
    std::string state, 
    std::string postalCode, 
    std::string country, 
  int number) :
     street(street),
                                                                                                                                     city(city),
                                                                                                                                     state(state),
                                                                                                                                     postalCode(postalCode),
                                                                                                                                     country(country),
                                                                                                                                     number(number)
{
    this->addressId = lenght++;
    this->lenght++;
}

Address::~Address()
{
    this->lenght--;
}

std::string Address::getAddress()
{
    return this->city + " - " + this->state + ", " + this->street + " " + std::to_string(number);
}