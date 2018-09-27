#include "Pomieszczenie.h"
#include <iostream>

template <void (Pomieszczenie::*T)(void)>
void Lokaj(const Pomieszczenie& room){
    (room.*T)();
}