#pragma once
#include <iostream>
//klasa reprezentujaca strone
class Page{
public:
    //konstruktor
    Page(): m_header("empty"), m_text("empty") {}

    //metoda dodajaca naglowek strony
    void AddHeader(std::string header) {m_header=header;}

    //metoda dodajaca tekst na stronie
    void AddText(std::string text){m_text=text;}

    //metoda kopiujaca strone i zwracajaca wskazik do strony
    Page* Copy(void) const;

    //metoda wypisujaca zawartosc strony
    void Print(void) const;

    //metoda zwracajaca naglowek
    std::string GetHeader(void) {return m_header;}

    //metoda zwracajca tekst
    std::string GetText(void) {return m_text;}

private:
    std::string m_header; //naglowek
    std::string m_text; //tekst
};
