//
//  Pessoa.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(Cpf cpf, std::string nome) : cpf(cpf), nome(nome) {
    verificaTamanhoNome();
}

void Pessoa::verificaTamanhoNome() {
    if (this->nome.size() < 5) {
        std::cout << "Nome muito curto." << std::endl;
        exit(1);
    }
}
