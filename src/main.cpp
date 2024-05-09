#include "../includes/Config.hpp"

using namespace std;

int main () {
    Account account(Account::ACTIVE, Person("Matheus", "Moraes", "dateOfBirth", "matheus.devjava@gmail.com", "32287692", "Rua rangel", "28838392"));
  
    cout << "O banco tem " << account.person.getFullName() << " contas" << endl;

    return 0;
}
