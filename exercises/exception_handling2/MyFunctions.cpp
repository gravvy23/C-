#include "MyFunctions.h"


//zmienna globalna
int ReturnValueID;

/////////////////////////////////////////////
void Fold1(MyClass* myclass){
    MyClass temp = *myclass;
    std::cout<<"Entering fold level 1"<<std::endl;
    temp.SetName(" F1");
    Fold2(&temp);
}

/////////////////////////////////////////////
void Fold2(MyClass* myclass){
    MyClass temp = *myclass;
    std::cout<<"Entering fold level 2"<<std::endl;
    temp.SetName(" F2");
    Fold3(&temp);
}

/////////////////////////////////////////////
void Fold3(MyClass* myclass){
    MyClass temp = *myclass;
    temp.SetName(" F3");
    std::cout<<"Entering fold level 3"<<std::endl;
    try
    {
        switch (ReturnValueID){
            case 0:{
                throw 9.242f;
                break;
            }
            case 1:{
                throw -87;
                break;
            }
            case 2: {
                throw 16u;
                break;
            }
            case 3: {
                throw 3.14157;
                break;
            }
        }
    }
    catch (double fLiczba) {
        std::cout<<"Caught an exception of type: double"<<std::endl;
    }
    catch (int nLiczba) {
        std::cout<<"Caught an exception of type: int"<<std::endl;
    }
    catch (unsigned uLiczba) {
        std::cout<<"Caught an exception of type: unsigned"<<std::endl;
    }
    catch (float fLiczba) {
        std::cout<<"Caught an exception of type: float"<<std::endl;
    }

     std::set_terminate(MyTerminate);
    throw MyException();
}

/////////////////////////////////////////////
void MyTerminate(void){
    std::cout<<"--- UWAGA: blad mechanizmu wyjatkow ---"<<std::endl;
    exit(1);
}