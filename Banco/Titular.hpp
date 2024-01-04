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

class Titular 
{
private:
    Cpf cpf;
    std::string nome;
    
public:
    Titular(Cpf cpf, std::string nome);
};

#endif /* Titular_hpp */
