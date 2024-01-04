//
//  Funcionario.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Funcionario_hpp
#define Funcionario_hpp
#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Funcionario : public Pessoa {
private:
    float salario;
    
public:
    Funcionario(Cpf cpf, std::string nome, float salario);
    std::string getNome();
};

#endif /* Funcionario_hpp */
