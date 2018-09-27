#pragma once
#include "MyClass.h"
#include "MyException.h"

//funkcja globalna fold1
//zmienia nazwe MyClass i wywoluje funkcje fold2
void Fold1(MyClass* myclass);

//funkcja globalna fold2
//zmienia nazwe MyClass i wywoluje funkcje fold3
void Fold2(MyClass* myclass);

//fukcja globalna fold3
//zawiera bloki try catch, rzuca wyjatek MyException 
//wywoluje set_terminate
void Fold3(MyClass* myclass);

//fukcja zastepujaca terminate
void MyTerminate(void);