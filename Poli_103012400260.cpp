#include "poli.h"
#include <iostream>
using namespace std;

void createListPoli_103012400260(ListPoli &L) {
    L.first = nullptr;
    L.last = nullptr;
}

adrPoli allocatePoli_103012400260(DataPoli poli) {
    adrPoli P = new ElmPoli;
    P->info = poli;
    P->next = nullptr;
    P->pasien = nullptr; 
    return P;
}

bool isEmptyPoli_103012400260(ListPoli L) {
    return L.first == nullptr;
}

void insertFirstPoli_103012400260(ListPoli &L, adrPoli P) {
    if (isEmptyPoli(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}
