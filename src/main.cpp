#include "../includes/Config.hpp"
#include "headers/Person.hpp"
#include <iostream>

using namespace std;

Person arrayDeObjetos[] = {
    Employee("Gerente", "Marcos", "Silva", "04/01/1987", "marcos@gmail.com",
        "11930092838", Address("Rua Dr Mauricio","São Paulo", "SP", "39302-03", "Brazil", 39))
};

int main () {
    string input;
    cin >> input;

    cout << "Você digitou: " << input << endl;

    #ifdef IGNORE_CODE
    Checking account(Account::ACTIVE,
     Customer("Matheus", "Moraes", "20/02/2001", "matheus.devjava@gmail.com", "32287692",
        Address("Rua rangel pestana", "São Paulo", "SP", "29333-39","Brazil", 1323))
    );

    cout << "Cliente: " << account.customer.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << account.customer.address.getAddress() << endl;

    account.deposit(1000.0);

    account.withdraw(200.0);

    cout << "Seu saldo atual: " << account.currentBalance() << endl;

    Employee employee("Gerente", "Marcos", "Silva", "04/01/1987", "marcos@gmail.com", "11930092838",
        Address("Rua Dr Mauricio","São Paulo", "SP", "39302-03", "Brazil", 39));

    cout << "Funcionario: " << employee.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << employee.address.getAddress() << endl;
    #endif
    return 0;
}
