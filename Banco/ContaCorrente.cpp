//
//  ContaCorrente.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular) {
    
}

float ContaCorrente::taxaDeSaque() const {
    return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor) {
    auto resultado = this->sacar(valor);
    if (resultado.first == Conta::ResultadoSaque::Sucesso) {
        destino.depositar(valor);
    }
}

float ContaCorrente::transfereTudo() {
    float valor = this->saldo;
    this->saldo = 0;
    return valor;
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
    this->depositar(contaOrigem.transfereTudo());
}
