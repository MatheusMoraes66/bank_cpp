#pragma once
#include "Account.hpp"
#include "../Customer.hpp"

class Savings: public Account
{
    public:
        Savings(Account::Status status, Customer customer);
        float withdrawalFee() const;
};
