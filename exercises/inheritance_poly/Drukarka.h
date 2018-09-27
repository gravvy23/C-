#pragma once
#include "Papierozerne.h"
class Drukarka: virtual public Papierozerne{
public:
    //konstruktor
    Drukarka(Rozdzielczosc rozdz) : Papierozerne(rozdz) {}

    //wirtualna metoda zwracajaca info o rodzaju urzadzenia
    virtual std::string rodzaj(void) const{
        return std::string("Drukarka");
    }

    //metoda zwracajaca info o rozdzielczosci
    std::string rozdzielczosc(void) const{
        std::ostringstream tmp;
        tmp<<m_rozdz.get_x();
        tmp<<"x";
        tmp<<m_rozdz.get_y();
        return tmp.str();
    }

    //destruktor wirtualny
    virtual ~Drukarka(){}
};
