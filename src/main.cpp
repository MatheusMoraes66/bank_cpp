#include "../includes/Config.hpp"

using namespace std;

int main () {
   //  Account account(Account::ACTIVE, Person("Matheus", "Moraes", "dateOfBirth", "matheus.devjava@gmail.com", "32287692", "Rua rangel", "28838392"));
   //  Employee employee(Person("João", "Caleb", "dateOfBirth", "matheus.devjava@gmail.com", "32287692", "Rua rangel", "28838392"));
    Customer customer("Matheus", "Moraes", "20/02/2001", "matheus.devjava@gmail.com", "32287692", Address("Rua rangel pestana", "São Paulo", "São Paulo", "2933-39","Brazil", 1223));
    
    cout << "Cliente: " << customer.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << customer.address.getAddress() << endl;
    
    Employee employee("Gerente", "Marcos", "Silva", "04/01/1987", "marcos@gmail.com", "11930092838", Address("Rua Dr Mauricio","São Paulo", "SP", "39302-03", "Brazil", 39));

    cout << "Funcionario: " << employee.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << employee.address.getAddress() << endl;

    return 0;
}
