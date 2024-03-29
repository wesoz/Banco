//
//  Conta.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 03/01/24.
//

#include <iostream>
#include "Conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular)
    : numero(numero), titular(titular), saldo(0) {
    numeroDeContas++;
}

Conta::~Conta() {
    std::cout << "Destrutor da Conta" << std::endl;
    numeroDeContas--;
}

std::variant<Conta::ResultadoSaque, float> Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return ResultadoSaque::ValorNegativo;
    }
    
    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;
    
    if (valorDoSaque > this->saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return ResultadoSaque::SaldoInsuficiente;
    }
    
    this->saldo -= valorDoSaque;
    return this->saldo;
}

void Conta::depositar(float valorADepositar) {
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    this->saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar) {
    this->depositar(valorADepositar);
}

std::string Conta::getNumero() const {
    return numero;
}

float Conta::getSaldo() const {
    return saldo;
}

int Conta::getNumeroDeContas() {
    return numeroDeContas;
}

bool Conta::operator < (Conta& outra) {
    return this->saldo < outra.saldo;
}
