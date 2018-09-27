#pragma once
#include "PojazdTrakcyjny.h"
#include "Samochod.h"

class Trolejbus : public PojazdTrakcyjny, public Samochod{
public:

    Trolejbus(Silnik silnik, int stan_licznika, std::string kolor = "czarny") : Pojazd(silnik, kolor, stan_licznika,0), PojazdTrakcyjny(silnik, stan_licznika, kolor){}

    virtual Pojazd* Clone() {
        return new Trolejbus(m_silnik, m_stan_licznika,m_kolor);
    }
private:

};
