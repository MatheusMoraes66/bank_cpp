#include "../../headers/account/Checking.hpp"

Checking::Checking(Account::Status status, Customer customer)
    :Account(status, customer)
{}

float Checking::withdrawalFee() const
{
    return 0.04;
}
