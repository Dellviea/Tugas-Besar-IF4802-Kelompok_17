#include "header.h"
#include <iostream>
using namespace std;

void insertFirstPasien_103012400029(adrPasien &firstPasien, adrPasien P) {
    if (firstPasien == nullptr) {
        firstPasien = P;
    } else {
        P->next = firstPasien;
        firstPasien->prev = P;
        firstPasien = P;
    }
}

void insertLastPasien_103012400029(adrPasien &firstPasien, adrPasien P) {
    if (firstPasien == nullptr) {
        firstPasien = P;
    } else {
        adrPasien Q = firstPasien;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
        P->prev = Q;
    }
}

void insertAfterPasien_103012400029(adrPasien Prec, adrPasien P) {
    if (Prec != nullptr) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != nullptr) {
            Prec->next->prev = P;
        }
        Prec->next = P;
    }
}
