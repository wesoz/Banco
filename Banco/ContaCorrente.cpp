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

void ContaCorrente::transferePara(Conta &destino, float valor) {
    this->sacar(valor);
    destino.depositar(valor);
}
