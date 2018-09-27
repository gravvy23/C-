#pragma once
#include <iostream>
#include "Page.h"
//klasa reprezentujaca ksiazke
class Book{
public:

    //konstruktor (tworzy strone tytulowa)
    Book(std::string title = "dummy");

    //metoda dodajaca strone
    void AddPage(const Page* page);

    //metoda kopiujaca ksiazke
    void Copy(const Book* book);

    //metoda dodajaca tytul jako tekst na stronie tytulowej
    void AddTitle(std::string title) {
        m_pages[0]->AddText(title);
        m_title = title;
    }

    //metoda dodajaca naglowek stron oprocz pierwszej
    void AddHeader(std::string header);

    //metoda dodajaca text do stron (od strony drugiej)
    void AddText(std::string text);

    //metoda wypisujaca zawarotsc ksiazki
    void Print(void) const;

    //metoda zwracajaca tytul ksiazki
    std::string GetTitle(void) const{
        return m_title;
    }

    //destruktor
    ~Book();
private:
    std::string m_autor; //autor
    std::string m_title; //tytul
    Page** m_pages; //tablica ze wskaznikami do stron
    int m_size; //liczba stron
};
