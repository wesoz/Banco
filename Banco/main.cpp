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
    cout << "O saldo da conta é " << conta.getSaldo() << endl;
}

void fazLogin(const Autenticavel& alguem, string senha) {
    if (alguem.autentica(senha)) {
        cout << "Autenticado com sucesso" << endl;
    } else {
        cout << "Senha incorreta" << endl;
    }
}

ostream& operator<<(ostream& cout, const Conta& conta) {
    Titular titular = conta.titular;
    cout << "(operator) O saldo da conta é " << conta.getSaldo() << endl;
    cout << "(operator) O titular da conta é " << titular.getNome() << endl;
    return cout;
}

void fazSaque(Conta& conta, float valor) {
    std::variant<Conta::ResultadoSaque, float> resultado = conta.sacar(valor);
    if (auto saldo = std::get_if<float>(&resultado)) {
        cout << "Seu saldo é de " << *saldo << endl;
    }
}

template<typename T> T menor(T a, T b) {
    return a < b ? a : b;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius", "senha123");
    ContaCorrente umaConta("123456", titular);
    umaConta.depositar(1000);
    umaConta.sacar(100);
    
    ContaPoupanca umaOutraConta("654321", Titular(string("321.123.111-10"), "Wesley", "senha123"));
    umaOutraConta.depositar(1000);
    cout << endl;
    cout << "---------------" << endl;
    cout << "| TESTE SAQUE |" << endl;
    cout << "---------------" << endl;
    fazSaque(umaOutraConta, 100);

    ContaCorrente terceiraConta("654321", Titular("321.123.111-10", "Third", "senha123"));
    terceiraConta.depositar(200);
    
    Gerente funcionario(string("321.123.111-10"), "Dias Vinicius", 1000, DiaDaSemana::Terca, "senha123");
    
    cout << endl;
    cout << "---------------" << endl;
    cout << "| PRINT SALDO |" << endl;
    cout << "---------------" << endl;
    cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << umaOutraConta.getSaldo() << endl;
    cout << "Terceira conta: " << terceiraConta.getSaldo() << endl;
    
    umaConta.transferePara(terceiraConta, 200);

    // operator overload in base class
    (Conta&)terceiraConta += 600;
    
    // operator overload
    terceiraConta += umaConta;
    
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "| TESTE FRIEND FUNCTION |" << endl;
    cout << "-------------------------" << endl;
    // friend function
    cout << umaConta;
    exibeSaldo(terceiraConta);
    
    fazLogin(titular, "senha123");
    
    cout << endl;
    cout << "--------------------" << endl;
    cout << "| TESTE STATIC ATT |" << endl;
    cout << "--------------------" << endl;
    cout << "Número de contas: " << Conta::getNumeroDeContas() << endl;
    
    cout << "Nome do funcionário: " << funcionario.getNome() << endl;
    
    cout << endl;
    cout << "---------------" << endl;
    cout << "| TESTE MENOR |" << endl;
    cout << "---------------" << endl;
    cout << menor<Conta&>(umaConta, umaOutraConta);
    cout << menor(2, 1) << endl;
    cout << menor(5.5, 5.49) << endl;
    cout << endl << endl;
    
    return 0;
}
