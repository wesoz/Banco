//
//  ContaPoupanca.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef ContaPoupanca_hpp
#define ContaPoupanca_hpp
#pragma once
#include <string>
#include "Titular.hpp"
#include "Conta.hpp"

class ContaPoupanca : public Conta {
  
public:
    ContaPoupanca(std::string numero, Titular titular);
    ~ContaPoupanca();
    float taxaDeSaque() const override;
};

#endif /* ContaPoupanca_hpp */
