#include "header.h"
#include <iostream>
using namespace std;

void insertLastPoli_103012400029(ListPoli &L, adrPoli P){
    if (isEmptyPoli_103012400260(L)) {
        L.first = P;
        L.last = P;
        return;
    }

    L.last->next = P;
    L.last = P;
    P->next = nullptr;
}

void insertAfterPoli_103012400029(adrPoli Prec, adrPoli P){
    if (Prec == nullptr) {
        return;
    }
    
    P->next = Prec->next;
    Prec->next = P;
}

void deleteFirstPoli_103012400029(ListPoli &L, adrPoli &P){
    if (isEmptyPoli_103012400260(L)) {
        P = nullptr;
        return;
    }

    P = L.first;
    L.first = L.first->next;
    P->next = nullptr;
    
    if (L.first == nullptr) {
        L.last = nullptr;
    }
}