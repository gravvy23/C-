#pragma once
#include "Urzadzenie.h"

//klasa reprezentujaca skaner
class Skaner: public Urzadzenie{
public:
    //konstruktor
    Skaner(Rozdzielczosc rozdz) : Urzadzenie(rozdz) {}

    //wirtualna metoda zwracajaca info o rodzaju urzadzenia
    virtual std::string rodzaj(void) const{
        return std::string("Skaner");
    }

    //metoda wyswietlajaca info o rozdzielczosci urzadzenia
    std::string rozdzielczosc(void) const{
        std::ostringstream tmp;
        tmp<<m_rozdz.get_x();
        tmp<<"x";
        tmp<<m_rozdz.get_y();
        return tmp.str();
    }

    //wirtualny destruktor
    virtual ~Skaner() {}
};
