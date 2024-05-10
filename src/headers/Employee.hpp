#pragma once
#include "./Person.hpp"

class Employee : public Person
{
public:
    static int lenght;
private:
    int employeeId;
public:
    Employee(const Person& person);
    ~Employee();

};