#pragma once
#include <iostream>

//kalsa MyClass
class MyClass{
public:
    //konsturktor
    MyClass(std::string name) : m_name(name){
        std::cout<<"Created MyClass:"<<m_name<<std::endl;
    }

    //konstruktor kopiujacy
    MyClass(const MyClass& myclass){
        m_name = myclass.m_name;
        std::cout<<"Copy created MyClass:"<<m_name<<std::endl;
    }

    //metoda zmieniajaca pole m_name
    void SetName(std::string name){
        m_name = name;
    }

    //destruktor
    ~MyClass(){
        std::cout<<"Destroyed MyClass:"<<m_name<<std::endl;
    }
private:
    std::string m_name;
};
