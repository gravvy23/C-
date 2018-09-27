#pragma once
#include "Urzadzenie.h"

//klasa reprezentujaca urzadzenia papierozerne
class Papierozerne: public Urzadzenie{
public:
    //konstruktor
    Papierozerne(Rozdzielczosc rozdz) : Urzadzenie(rozdz) {}

    //wirtualna metoda zwracajaca info o rodzaju urzadzenia
    virtual std::string rodzaj(void) const{
        return std::string("Papierozerne");
    }

    //destruktor wirtualny
    virtual ~Papierozerne(){}
};
