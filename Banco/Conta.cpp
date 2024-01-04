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
    numeroDeContas--;
}

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }
    
    if (valorASacar > this->saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    
    this->saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    this->saldo += valorADepositar;
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
