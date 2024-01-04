//
//  Titular.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "Titular.hpp"

Titular::Titular(Cpf cpf, std::string nome, std::string senha) :
    Pessoa(cpf, nome), Autenticavel(senha) {
    
}
