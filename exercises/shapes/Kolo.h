#pragma once
#include "Kwadrat.h"

//klasa reprezentujaca kolo
class Kolo : public Ksztalt{
public:

    //konstruktor przyjmujaca promien
    Kolo(int r) : m_r(r) {}

    //metoda wirtualna
    void wypisz(std::ostream& ekran) const;

    //metoda wirtualna
    double polePow(void) const;
private:
    int m_r; //promien kola
};