#include "header.h"
#include <iostream>
using namespace std;

void insertFirstPasien_103012400029(ListPasien &L, adrPasien P) {
    if (isEmptyPasien_103012400260(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLastPasien_103012400029(ListPasien &L, adrPasien P) {
    if (isEmptyPasien_103012400260(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void insertAfterPasien_103012400029(ListPasien &L, adrPasien Prec, adrPasien P) {
    if (Prec == nullptr) {
        return;
    }
    if (Prec == L.last) {
        insertLastPasien_103012400029(L, P);
        return;
    }
    P->next = Prec->next;
    P->prev = Prec;
    Prec->next->prev = P;
    Prec->next = P;
}