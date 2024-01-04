//
//  ContaPoupanca.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular) {
    
}

ContaPoupanca::~ContaPoupanca() {
    std::cout << "Destrutor da Conta Poupança" << std::endl;
}

float ContaPoupanca::taxaDeSaque() const {
    return 0.03;
}
