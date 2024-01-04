#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Gerente.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Autenticavel.hpp"

using namespace std;

void exibeSaldo(const Conta& conta) {
    //Conta umaConta("123456", "123.456.789-10", "Vinicius");
    cout << "O saldo da conta é " << conta.getSaldo() << endl;
}

void fazLogin(const Autenticavel& alguem, string senha) {
    if (alguem.autentica(senha)) {
        cout << "Autenticado com sucesso" << endl;
    } else {
        cout << "Senha incorreta" << endl;
    }
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius", "senha123");
    ContaCorrente umaConta("123456", titular);
    umaConta.depositar(1000);
    umaConta.sacar(100);
    
    ContaPoupanca umaOutraConta("654321", Titular(string("321.123.111-10"), "Wesley", "senha123"));
    umaOutraConta.depositar(1000);
    umaOutraConta.sacar(100);

    ContaCorrente terceiraConta("654321", Titular("321.123.111-10", "Third", "senha123"));
    terceiraConta.depositar(200);
    
    Gerente funcionario(string("321.123.111-10"), "Dias Vinicius", 1000, DiaDaSemana::Terca, "senha123");
    
    cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << umaOutraConta.getSaldo() << endl;
    
    umaConta.transferePara(terceiraConta, 200);
    
    exibeSaldo(umaConta);
    exibeSaldo(terceiraConta);
    
    fazLogin(titular, "senha123");
    
    cout << "Número de contas: " << Conta::getNumeroDeContas() << endl;
    
    cout << "Nome do funcionário: " << funcionario.getNome() << endl;
    
    return 0;
}
