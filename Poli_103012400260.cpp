#include <iostream>
#include "header.h"
using namespace std;

void createListPoli_103012400260(ListPoli &L) {
    L.first = nullptr;
}

adrPoli allocatePoli_103012400260(DataPoli poli) {
    adrPoli P = new ElmPoli;
    P->info = poli;
    P->next = nullptr;
    P->firstPasien = nullptr;
    return P;
}

bool isEmptyPoli_103012400260(ListPoli L) {
    return L.first == nullptr;
}

void insertFirstPoli_103012400260(ListPoli &L, adrPoli P) {
    if (isEmptyPoli_103012400260(L)) {
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}
