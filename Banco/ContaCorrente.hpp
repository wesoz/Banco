//
//  ContaCorrente.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef ContaCorrente_hpp
#define ContaCorrente_hpp
#pragma once
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

class ContaCorrente final : public Conta {
public:
    ContaCorrente(std::string numero, Titular titular);
    float taxaDeSaque() const override;
};

#endif /* ContaCorrente_hpp */
