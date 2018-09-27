#pragma once
#include "Wejscie.h"

//klasa reprezentujaca odtwarzacz DVD
class OdtwarzaczDVD : public Wejscie{
public:

    //konstruktor
    OdtwarzaczDVD(char character) : Wejscie(character,"DVD") {}

    //metoda zwracajaca nazwe urzadzenia
    const std::string ShowName() const {
        return m_name;
    }

    //metoda zwracajaca wnetrze urzadzenia
    char ShowChar() const {
        return m_character;
    }
};