#pragma once
#include "Samochod.h"

class Ford : public Samochod{
public:

    Ford(Silnik silnik, int stan_licznika, std::string kolor = "czarny") : Pojazd(silnik, kolor, stan_licznika,4), Samochod(silnik, kolor, stan_licznika) {}

    virtual Pojazd* Clone(){
            return new Ford(m_silnik, m_stan_licznika,m_kolor);}
private:

};
