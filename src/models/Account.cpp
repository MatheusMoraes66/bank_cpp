#include "../includes/Account.hpp"

int Account::lenght = 0;

Account::Account(std::string number, std::string name):
    number(number),
    titularName(name),
    sale(0)
{
    this->lenght++;
}

Account::~Account()
{
    this->lenght--;
}

void Account::withdraw(float value)
{
    if (value < 0)
    {
        std::cout << "Não é possivel fazer essa operação." << std::endl;
        return;
    }
    if (value > this->sale)
    {
        std::cout << "Não é possivel fazer essa operação, o valor está acima do seu saldo atual." << std::endl;
        return;
    }

    this->sale -= value;
}

void Account::deposit(float value)
{
    if (value < 0)
    {
        std::cout << "Não é possivel fazer essa operação." << std::endl;
        return;
    }

    this->sale += value;
}

float Account::getSale()
{
    return this->sale;
}

void Account::setTitularName(std::string name)
{
    this->titularName = name;
}
std::string Account::getTitularName() const
{
    return this->titularName;
}

void Account::setNumber(std::string number)
{
    this->number = number;
}
std::string Account::getNumber() const
{
    return this->number;
}
