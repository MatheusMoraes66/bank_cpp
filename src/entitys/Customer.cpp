#include "../headers/Customer.hpp"

int Customer::lenght = 0;

Customer::Customer(const Person& person): 
Person(person) 
{
    this->customerId = lenght++;
    this->lenght++;
}

Customer::~Customer() {
     this->lenght--;
}