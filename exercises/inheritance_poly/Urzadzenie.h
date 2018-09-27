#pragma once
#include <iostream>
#include <sstream>
#include "Rozdzielczosc.h"

//klasa reprezentujaca urzadzenie biurowe
class Urzadzenie{
public:
    //konstruktor
    Urzadzenie(Rozdzielczosc rozdz): m_rozdz(rozdz) {}

    //metoda wirtualna wyswietlajaca rodzaj urzadzenia
    virtual std::string rodzaj(void) const{
        return std::string("Urzadzenie");
    }

    //wirtualny destruktor
    virtual ~Urzadzenie(){}
protected:
    Rozdzielczosc m_rozdz; //rozdzielczosc urzadzenia
};
