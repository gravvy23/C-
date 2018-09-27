#pragma once
#include "Silnik.h"

class Pojazd{
public:

    //konsturktor domyslny
    Pojazd() : m_silnik(Silnik()),m_kolor("None"),m_stan_licznika(0),m_liczba_kol(0) {}

    //konstruktor
    Pojazd(Silnik silnik, std::string kolor, int stan_licznika, int liczba_kol = 0):
        m_silnik(silnik), m_kolor(kolor), m_stan_licznika(stan_licznika), m_liczba_kol(liczba_kol) {}

    //metoda zmieniajaca przebieg pojazdu
    void Przebieg(int stan_licznika){
        m_stan_licznika=stan_licznika;
    }

    virtual Pojazd* Clone() = 0;

    //przeciazony operator przypisania
    Pojazd& operator=(const Pojazd& pojazd);

    //przeciazony operator << 
    friend std::ostream& operator<<(std::ostream &ekran,const Pojazd &pojazd);
protected:
    Silnik m_silnik;    //silnik
    std::string m_kolor;    //kolor
    int m_stan_licznika;    //stan licznika
    int m_liczba_kol; //liczba kol
private:
    Pojazd(const Pojazd& pojazd);
};

std::ostream& operator<<(std::ostream &ekran,const Pojazd &pojazd);