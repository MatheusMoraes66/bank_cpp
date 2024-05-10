#include "../headers/Employee.hpp"

int Employee::lenght = 0;

Employee::Employee(const Person& person): 
Person(person) 
{
    this->employeeId = lenght++;
    this->lenght++;
}

Employee::~Employee() {
     this->lenght--;
}