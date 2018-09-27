#pragma once
#include <iostream>
#include "Book.h"

//klasa reprezentujaca katalog ksiazek
class Catalog{
public:
    //konstruktor
    Catalog(std::string title): m_title(title),m_books(0),m_size(0) {}

    //metoda dodajaca ksiazke
    void AddBook(Book* book);

    //metoda wypisujaca zawartosc katalogu
    void Print(void) const;

    //destruktor
    ~Catalog();
private:
 std::string m_title; //tytul katalogu
 Book** m_books; //tablica wskaznikow do ksiazek
 int m_size; //rozmiar tablicy
};
