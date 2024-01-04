//
//  Caixa.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Caixa_hpp
#define Caixa_hpp
#pragma once
#include "Funcionario.hpp"

class Caixa : public Funcionario {
public:
    Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
    float bonificacao() const override;
};

#endif /* Caixa_hpp */
