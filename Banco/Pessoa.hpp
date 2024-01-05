//
//  Pessoa.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Pessoa_hpp
#define Pessoa_hpp
#pragma once
#include <string>
#include "Cpf.hpp"

class Pessoa {
protected:
    Cpf cpf;
    std::string nome;

    void verificaTamanhoNome();
public:
    Pessoa(Cpf cpf, std::string nome);
    std::string getNome() const;
};

#endif /* Pessoa_hpp */
