#include "../../headers/account/Savings.hpp"

Savings::Savings(Account::Status status, Customer customer)
    :Account(status, customer)
{}

float Savings::withdrawalFee() const
{
    return 0.02;
}
