#pragma once
#include <iostream>

class Silnik{
public:

    //konstruktor (domyślny)
    Silnik(int moc = 0, double pojemnosc = 0., std::string paliwo = "None"): 
            m_moc(moc), m_pojemnosc(pojemnosc), m_paliwo(paliwo) {}


private:
    int m_moc; //moc
    double m_pojemnosc; //pojemnosc
    std::string m_paliwo; //paliwo
};

