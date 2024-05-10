#pragma once
#include "./Person.hpp"

class Customer : public Person
{
public:
    static int lenght;
private:
    int customerId;
public:
    Customer(const Person& person);
    ~Customer();

};