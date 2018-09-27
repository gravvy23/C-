#pragma once
#include "Drukarka.h"
#include "Ksero.h"
#include "Skaner.h"

//klasa reprezentujaca urzadzenie wielofunkcyjne
class Wielofunkcyjne: public Drukarka, public Ksero, public Skaner{
public:
    //konstruktor
    Wielofunkcyjne(Rozdzielczosc r1, Rozdzielczosc r2) : Papierozerne(r1), Drukarka(r1), Ksero(r1), Skaner(r2) {}

    //wirtualna metoda zwracajaca info o rodzaju urzadzenia
    virtual std::string rodzaj(void) const{
        return std::string("Wielofunkcyjne");
    }

    //destruktor wirtualny
    virtual ~Wielofunkcyjne() {}
};
