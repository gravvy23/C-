#pragma once
#include "Wejscie.h"

//klasa abstrakcyjna reprezentujaca urzadzenie wyjsciowe
class Wyjscie{
public:

    //konstruktor
    Wyjscie(int width, int length, int frame_length, char frame, std::string name): m_width(width), m_length(length),
                                                                  m_frame_length(frame_length), m_frame(frame), m_name(name) {}

    //metoda (wirtualna) wyswietlajaca info przez urzadzenie wyjsciowe przyjmujaca urzadzenie wejsciowe                                                            
    virtual void Wyswietl(const Wejscie& wejscie) const;

    //destruktor wirtualny
    virtual ~Wyjscie(){}

protected:
    int m_width, m_length, m_frame_length; //szerokosc, dlugosc ekranu, dlugosc ramki
    const char m_frame; //znak ramki
    const std::string m_name; //nazwa urzadzenia

};
