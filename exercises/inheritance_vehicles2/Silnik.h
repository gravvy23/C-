#pragma once
#include <iostream>

class Silnik{
public:

    //konstruktor (domyślny)
    Silnik(int moc = 0, double pojemnosc = 0., std::string paliwo = "None"): 
            m_moc(moc), m_pojemnosc(pojemnosc), m_paliwo(paliwo) {}
    
    std::ostream& Wypisz(std::ostream& out) const {
        out<<"Moc: "<<m_moc<<" pojemnosc: "<<m_pojemnosc<<" paliwo: "<<m_paliwo<<std::endl;
        return out;
    }
private:
    int m_moc; //moc
    double m_pojemnosc; //pojemnosc
    std::string m_paliwo; //paliwo
};

