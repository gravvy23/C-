#pragma once
#include <iostream>

template <typename T>
class UniquePointer{
public:
    //konstruktor konwertujący wzkaznik na uniquepointer
    UniquePointer(T* ptr) : m_ptr(ptr) {}

    //konstruktor kopiujacy, zwalnia pamiec w obiekcie z ktorego kopiujemy wskaznik
    UniquePointer(const UniquePointer<T>& uptr){
        m_ptr = new T();
        *m_ptr = *(uptr.m_ptr);
        uptr.~UniquePointer();
    }

    //przeciazenie operatora '*'
    T& operator*(void){
        return *m_ptr;
    }

    //przeciazony operator przypisania
    UniquePointer<T>& operator=(const UniquePointer<T>& uptr){
        if (this != &uptr) { //jezeli to nie ten sam obiekt to ...
        delete m_ptr;
        m_ptr = new T();
        *m_ptr = *(uptr.m_ptr);
        uptr.~UniquePointer();
        }
        return *this;
    }

    //przeciazony operator <<
    friend std::ostream& operator<<(std::ostream& out,const UniquePointer<T>& uptr){
        out<<"[pointing to "<<uptr.m_ptr<<"]";
        return out;
    }

    //operator konwertujacy uniquepointer na wskaznik
    operator T*(){
        return m_ptr;
    }

    //destruktor
    ~UniquePointer(){
        delete m_ptr;
        m_ptr = NULL;
    }
private:
    T* m_ptr; //wskaznik do obiektu opakowany w SmartPointer
};
