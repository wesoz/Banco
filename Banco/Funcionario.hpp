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
#include "DiaDaSemana.hpp"

class Funcionario : public Pessoa {
private:
    float salario;
    DiaDaSemana diaDoPagamento;
    
public:
    Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
    std::string getNome() const;
    float getSalario() const;
    virtual float bonificacao() const = 0;
};

#endif /* Funcionario_hpp */
