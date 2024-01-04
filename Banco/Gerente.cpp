//
//  Gerente.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento, std::string senha) :
    Funcionario(cpf, nome, salario, diaDoPagamento), Autenticavel(senha) {
    
}

float Gerente::bonificacao() const {
    return this->getSalario() * 0.5;
}
