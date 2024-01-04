//
//  Cpf.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Cpf_hpp
#define Cpf_hpp
#pragma once
#include <string>

class Cpf {
private:
    std::string numero;
    
public:
    Cpf(std::string numero);
    Cpf(char* numero);
    std::string getNumero();
    
private:
    bool validaNumero(std::string numero);
};

#endif /* Cpf_hpp */
