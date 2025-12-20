#include "header.h"
#include <iostream>
using namespace std;

void insertLastPoli_103012400029(ListPoli &L, adrPoli P) {
    if (isEmptyPoli_103012400260(L)) {
        L.first = P;
    } else {
        adrPoli Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
    P->next = nullptr;
}

void insertAfterPoli_103012400029(adrPoli Prec, adrPoli P) {
    if (Prec != nullptr) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteFirstPoli_103012400029(ListPoli &L, adrPoli &P) {
    if (!isEmptyPoli_103012400260(L)) {
        P = L.first;
        L.first = L.first->next;
        P->next = nullptr;
    }
}

int totalPasien_103012400029(ListPoli L) {
    int total = 0;
    adrPoli P = L.first;
    while (P != nullptr) {
        total += countPasienPoli_103012400269(P->firstPasien);
        P = P->next;
    }
    return total;
}
