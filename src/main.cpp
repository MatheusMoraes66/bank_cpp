#include "./includes/Account.hpp"

using namespace std;

int main () {
    Account account("1233", "Matheus Moraes");
    account.deposit(1000.0);

    Account account1("2333", "João Faria");
    account1.deposit(100.0);

    cout << account.getTitularName() << endl;
    cout << "Saldo da sua conta: " << account.getSale() << endl;

    cout << account1.getTitularName() << endl;
    cout << "Saldo da sua conta: " << account1.getSale() << endl;


    cout << "O banco tem " << Account::lenght << " contas" << endl;

    return 0;
}
