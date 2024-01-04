#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

using namespace std;

void exibeSaldo(const Conta& conta) {
    //Conta umaConta("123456", "123.456.789-10", "Vinicius");
    cout << "O saldo da conta é " << conta.getSaldo() << endl;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius");
    ContaCorrente umaConta("123456", titular);
    umaConta.depositar(1000);
    umaConta.sacar(100);
    
    ContaPoupanca umaOutraConta("654321", Titular(string("321.123.111-10"), "Wesley"));
    umaOutraConta.depositar(1000);
    umaOutraConta.sacar(100);

    ContaCorrente terceiraConta("654321", Titular("321.123.111-10", "Third"));
    terceiraConta.depositar(200);
    
    exibeSaldo(umaConta);
    
    Funcionario funcionario(string("321.123.111-10"), "Dias Vinicius", 1000);
    
    cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << umaOutraConta.getSaldo() << endl;
    
    cout << "Número de contas: " << Conta::getNumeroDeContas() << endl;
    
    cout << "Nome do funcionário: " << funcionario.getNome() << endl;
    
    return 0;
}
