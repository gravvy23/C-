#include "Pojazd.h"
#include <iostream>

/////////////////////////////////////////////////////////////////////
std::ostream& operator<<(std::ostream &ekran,const Pojazd &pojazd){
    ekran<<std::endl<<"Liczba kol "<<pojazd.m_liczba_kol<<std::endl
         <<"Stan licznika "<<pojazd.m_stan_licznika<<" [km]"<<std::endl
         <<"Kolor "<<pojazd.m_kolor<<std::endl;
    return ekran;     
}

/////////////////////////////////////////////////////////////////////
Pojazd& Pojazd::operator=(const Pojazd& pojazd){
    m_silnik=pojazd.m_silnik;
    m_kolor=pojazd.m_kolor;
    m_stan_licznika=0; //zerowanie licznika nowego pojazdu
    m_liczba_kol=pojazd.m_liczba_kol;
    return *this;
}
