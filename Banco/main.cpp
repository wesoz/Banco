#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

void exibeSaldo(const Conta& conta) {
    //Conta umaConta("123456", "123.456.789-10", "Vinicius");
    cout << "O saldo da conta é " << conta.getSaldo() << endl;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius");
    Conta umaConta("123456", titular);
    umaConta.depositar(100);
    
    Conta umaOutraConta("654321", Titular(string("321.123.111-10"), "Wesley"));
    umaOutraConta.depositar(200);
    
    umaOutraConta.depositar(500);

    Conta terceiraConta("654321", Titular("321.123.111-10", "Third"));
    terceiraConta.depositar(200);
    
    exibeSaldo(umaConta);
    
    cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << umaOutraConta.getSaldo() << endl;
    
    cout << "Número de contas: " << Conta::getNumeroDeContas() << endl;
    
    return 0;
}
