//
//  Autenticavel.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Autenticavel_hpp
#define Autenticavel_hpp
#pragma once
#include <string>

class Autenticavel {
private:
    std::string senha;
    
public:
    Autenticavel(std::string senha);
    bool autentica(std::string senha) const;
};

#endif /* Autenticavel_hpp */
