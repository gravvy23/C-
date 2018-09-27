#pragma once
#include <iostream>

//klasa abstrakcyjna reprezentujaca urzadzenie wejsciowe
class Wejscie{
public:

    //konstruktor
    Wejscie(char character,const char* name) : m_character(character), m_name(name) {}

    //metoda (wirtualna) zwracajaca wnetrze urzadzenia
    virtual char ShowChar() const = 0;

    //metoda (wirtualna) zwracajaca nazwe urzadzenia
    virtual const std::string ShowName() const = 0;

    //destruktor wirtualny
    virtual ~Wejscie() {}

protected:
    char m_character; //wnetrze urzadzenia
    const std::string m_name; //nazwa urzadzenia
};
