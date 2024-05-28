#pragma once
#include "Account.hpp"
#include "../Customer.hpp"

class Checking: public Account
{
    public:
        Checking(Account::Status status, Customer customer);
        float withdrawalFee() const;
};
