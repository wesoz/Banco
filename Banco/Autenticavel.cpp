//
//  Autenticavel.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "Autenticavel.hpp"

Autenticavel::Autenticavel(std::string senha) : senha(senha) {
    
}

bool Autenticavel::autentica(std::string senha) const {
    return this->senha == senha;
}
