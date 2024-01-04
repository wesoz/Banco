//
//  Gerente.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Gerente_hpp
#define Gerente_hpp

#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente final : public Funcionario, public Autenticavel {
  
public:
    Gerente(Cpf cpf, std::string nome, float salario, std::string senha);
    float bonificacao() const;
};

#endif /* Gerente_hpp */
