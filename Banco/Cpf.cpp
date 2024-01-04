//
//  Cpf.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include <iostream>
#include "Cpf.hpp"

Cpf::Cpf(std::string numero) : numero(numero) {
    if (!validaNumero(numero)) {
        std::cout << "Cpf inválido " << std::endl;
        exit(1);
    }
}

Cpf::Cpf(char* numero) : numero(numero) {
    if (!validaNumero(numero)) {
        std::cout << "Cpf inválido " << std::endl;
        exit(1);
    }
}

bool Cpf::validaNumero(std::string numero) {
    return numero.size() == 14;
}

std::string Cpf::getNumero() {
    return this->numero;
}
