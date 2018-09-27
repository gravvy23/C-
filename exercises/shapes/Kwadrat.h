#pragma once
#include <iostream>

//klasa podstawowa Ksztalt
class Ksztalt{
public:
    //metoda wirtualna wypisujaca informacje o obiekcie
    virtual void wypisz(std::ostream& ekran) const = 0;

    //metoda wirtualna wypisujaca pole powierzchni
    virtual double polePow(void) const = 0;

    //destruktor wirtualny
    virtual ~Ksztalt() {}
};

//klasa reprezentujaca Kwadrat
class Kwadrat : public Ksztalt{
public:
    //konstruktor przyjmujacy dlugosc boku
    Kwadrat(int a) : m_a(a) {}

    //metoda wirtualna
    void wypisz(std::ostream& ekran) const;

    //metoda wirtualna
    double polePow(void) const;
private:
    int m_a; //dlugosc boku
};

//funkcja globalna wypisuajca info o obiekcie Ksztalt
void wypisz(const Ksztalt& ksztalt);