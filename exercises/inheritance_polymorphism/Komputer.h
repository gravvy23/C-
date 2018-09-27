#pragma once
#include "Wejscie.h"

//klasa reprezentujaca komputer
class Komputer : public Wejscie{
public:

    //konstruktor
    Komputer(char character) : Wejscie(character,"komputer") {}

    //metoda zwracajaca nazwe urzadzenia
    const std::string ShowName() const {
        return m_name;
    }

    //metoda zwracajaca wnetrze urzadzenia
    char ShowChar() const {
        return m_character;
    }
};
