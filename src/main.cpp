#include "../includes/Config.hpp"

using namespace std;

int main () {
    Account account(Account::ACTIVE, 
     Customer("Matheus", "Moraes", "20/02/2001", "matheus.devjava@gmail.com", "32287692", 
        Address("Rua rangel pestana", "São Paulo", "SP", "29333-39","Brazil", 1323))
    );
    
    cout << "Cliente: " << account.customer.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << account.customer.address.getAddress() << endl;
    
    Employee employee("Gerente", "Marcos", "Silva", "04/01/1987", "marcos@gmail.com", "11930092838", 
        Address("Rua Dr Mauricio","São Paulo", "SP", "39302-03", "Brazil", 39));

    cout << "Funcionario: " << employee.getFullName() << " foi criado" << endl;
    cout << "Mora no endereço: " << employee.address.getAddress() << endl;

    return 0;
}
