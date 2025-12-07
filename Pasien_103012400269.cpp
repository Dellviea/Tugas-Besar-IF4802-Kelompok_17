#include "header.h"
#include <iostream>
using namespace std;

void deleteFirstPasien_103012400269(adrPasien &firstPasien, adrPasien &P) {
    if (!isEmptyPasien_103012400260(firstPasien)) {
        P = firstPasien;
        firstPasien = firstPasien->next;
        if (firstPasien != nullptr)
            firstPasien->prev = nullptr;
        P->next = nullptr;
    }
}

void deleteLastPasien_103012400269(adrPasien &firstPasien, adrPasien &P) {
    if (!isEmptyPasien_103012400260(firstPasien)) {
        adrPasien Q = firstPasien;
        if (Q->next == nullptr) {
            P = Q;
            firstPasien = nullptr;
        } else {
            while (Q->next != nullptr) {
                Q = Q->next;
            }
            P = Q;
            Q->prev->next = nullptr;
        }
        P->prev = nullptr;
    }
}

void deleteAfterPasien_103012400269(adrPasien Prec, adrPasien &P) {
    if (Prec != nullptr && Prec->next != nullptr) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != nullptr)
            P->next->prev = Prec;
        P->next = nullptr;
        P->prev = nullptr;
    }
}
