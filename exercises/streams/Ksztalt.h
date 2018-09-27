#pragma once

//szablon do zliczania elementow
template <typename T>
class Counter{
public:
    //metoda dodawanie elementu
    void add(void){
        count++;
    }

    //metoda usuwanie elementu
    void remove(void){
        count--;
    }
    static T count;
};
template<typename T>
T Counter<T>::count;

//klasa bazowa
class Ksztalt : public Counter<unsigned>{
public:
    //konstruktor
    Ksztalt(void) : Counter<unsigned>() {
        Counter<unsigned>::add();
    }
    //metoda wirtualna obliczania pola
    virtual double polePow(void) const = 0;

    //metoda wirtualna wypisywania zawartosci
    virtual std::ostream& Wyswietl(std::ostream& strumien) const {
        strumien<<"rando"<<std::endl;
        return strumien;
    }

    //destruktor wirtualny
    virtual ~Ksztalt(){
        Counter<unsigned>::remove();
    }

    //metoda statyczna zwracajaca liczbe elementow
    static unsigned N(void){
        return Counter<unsigned>::count;
    }
private:

};

// dla ksztalt*
std::ostream& operator<<(std::ostream& strumien, const Ksztalt* ksztalt){
    return ksztalt->Wyswietl(strumien);

}

//dla ksztalt **
std::ostream& operator<<(std::ostream& strumien, const Ksztalt* ksztalt[]){
    const Ksztalt* tmp =  *ksztalt;
    for (unsigned i = 0 ; i < tmp->count; ++i){
        ksztalt[i]->Wyswietl(strumien);
    }
    return strumien;

}