#pragma once
#include <iostream>
class ObiektMiotajacy;

class typ{
public:
    //konsturktor
    typ(ObiektMiotajacy* object, int type):m_object(object), m_type(type) {}

    //metoda wyswietlajaca info o typie wyjatku
    void PrzedstawSie(void){
        std::cout<<"Nazywam sie "<<m_type
                 <<" (adres obiektu: "<<this<<")"<<std::endl;
    }

    //getter numeru typu 
    int GetType(void){
        return m_type;
    }

    //destruktor ktory usuwa obiekt rzucajacy wyjatek
    ~typ(){
        if (m_object) delete m_object;
    }
private:
    ObiektMiotajacy* m_object; //wskaznik do obiektu rzucajacego wykatek
    int m_type; //nr typu
};


//klasa typ3 dziedziczaca po typ
class typ3: public typ{
public:
    //konstruktor
    typ3(ObiektMiotajacy* ptr = NULL, int type = 3): typ(ptr,type) {}
};

//klasa typ4 dziedziczaca po typ
class typ4: public typ{
public:
    //konstruktot
    typ4(ObiektMiotajacy* ptr = NULL, int type = 4): typ(ptr,type) {}
};

//klasa typ2 dziedziczaca po typ3
class typ2: public typ3{
public:
    //konstruktor
    typ2(ObiektMiotajacy* ptr = NULL, int type = 2): typ3(ptr,type) {}
};

//klasa typ1 dziedziczaca po typ4
class typ1: public typ4{
public:
    //konstruktor
    typ1(ObiektMiotajacy* ptr = NULL, int type = 1): typ4(ptr,type) {}
};

//funkcja wysietlajaca info o wykatku i rzucajaca go dalej (re-throw)
void Przetworz(typ* wyjatek);