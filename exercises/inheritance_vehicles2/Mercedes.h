#pragma once
#include <istream>
#include "Samochod.h"

class Mercedes : public Samochod {
public:

    //konstruktor domyslny
    Mercedes() : Samochod() {}

    //konstruktor
    Mercedes(Silnik silnik, int stan_licznika, std::string kolor = "czarny metalic") : Pojazd(silnik, kolor, stan_licznika,4), Samochod(silnik, kolor, stan_licznika) {}

    //przeciazony operator =
    Mercedes& operator=(const Mercedes& mercedes){
        Samochod& samochod = *this;
        samochod = mercedes;
        return *this;
    }

     virtual Pojazd* Clone(){
        return new Mercedes(m_silnik, m_stan_licznika,m_kolor);}
};