#include "../includes/Config.hpp"

using namespace std;

int main () {
    Account account(Account::ACTIVE, Person("Matheus", "Moraes", "dateOfBirth", "matheus.devjava@gmail.com", "32287692", "Rua rangel", "28838392"));
    Employee employee(Person("João", "Caleb", "dateOfBirth", "matheus.devjava@gmail.com", "32287692", "Rua rangel", "28838392"));
    cout << "A conta do " << account.person.getFullName() << " foi criada" << endl;
    cout << "Funcionario responsavel: " << employee.getFullName() << endl;
    return 0;
}
