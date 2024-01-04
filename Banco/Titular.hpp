//
//  Titular.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Titular_hpp
#define Titular_hpp
#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include "Autenticavel.hpp"

class Titular : public Pessoa, public Autenticavel {
public:
    Titular(Cpf cpf, std::string nome, std::string senha);
};

#endif /* Titular_hpp */
