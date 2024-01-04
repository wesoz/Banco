//
//  Funcionario.cpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#include "Funcionario.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento) :
    Pessoa(cpf, nome), salario(salario), diaDoPagamento(diaDoPagamento) {
    
}

std::string Funcionario::getNome() const {
    return this->nome;
}

float Funcionario::getSalario() const {
    return this->salario;
}
