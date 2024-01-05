//
//  Pessoa.hpp
//  Banco
//
//  Created by Wesley De Oliveira De Paula on 04/01/24.
//

#ifndef Pessoa_hpp
#define Pessoa_hpp
#pragma once
#include <string>
#include <iostream>

template<typename TDocumento> class Pessoa {
protected:
    TDocumento documento;
    std::string nome;

private:
    void verificaTamanhoNome() {
        if (this->nome.size() < 5) {
            std::cout << "Nome muito curto." << std::endl;
            exit(1);
        }
    }
    
public:
    Pessoa(TDocumento documento, std::string nome) : documento(documento), nome(nome) {
        verificaTamanhoNome();
    }
    
    std::string getNome() const {
        return this->nome;
    }
};

#endif /* Pessoa_hpp */
