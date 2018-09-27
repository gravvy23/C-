#pragma once
#include "Kwadrat.h"

//klasa reprezentuajca Trojkat
class Trojkat : public Ksztalt{
public:

    //konstruktor przyjmujacy dlugosci bokow
    Trojkat(int a, int b, int c) : m_x((a+b+c)/2.), m_a(a), m_b(b), m_c(c) {}

    //metoda wirtualna
    void wypisz(std::ostream& ekran) const;

    //metoda wirtualna
    double polePow(void) const;
private:
    double m_x; //polowa obwodu trojkata
    int m_a, m_b, m_c; //boki trojkata
};
