//
//  Conta.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 03/01/24.
//

#ifndef Conta_h
#define Conta_h
#pragma once
#include <string>
#include <iostream>
#include <utility>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas;
    
public:
    static int getNumeroDeContas();
    
private:
    std::string numero;
    Titular titular;

protected:
    float saldo;
    
public:
    enum class ResultadoSaque {
        ValorNegativo, SaldoInsuficiente
    };
    Conta(std::string numero, Titular titular);
    virtual ~Conta();
    std::variant<ResultadoSaque, float> sacar(float valorASacar);
    void depositar(float valorADepositar);
    std::string getNumero() const;
    float getSaldo() const;
    virtual float taxaDeSaque() const = 0;
    void operator += (float valorADepositar);
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};

#endif /* Conta_h */
