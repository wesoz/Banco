//
//  Caixa.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento) :
    Funcionario(cpf, nome, salario, diaDoPagamento) {
    
}

float Caixa::bonificacao() const {
    return this->getSalario() * 0.01;
}
