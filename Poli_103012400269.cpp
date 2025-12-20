#include <iostream>
#include "header.h"
using namespace std;

void deleteLastPoli_103012400269(ListPoli &L, adrPoli &P) {
    if (!isEmptyPoli_103012400260(L)) {
        adrPoli Q = L.first;
        if (Q->next == nullptr) {
            P = Q;
            L.first = nullptr;
        } else {
            while (Q->next->next != nullptr) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = nullptr;
        }
    }
}

void deleteAfterPoli_103012400269(adrPoli Prec, adrPoli &P) {
    if (Prec != nullptr && Prec->next != nullptr) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = nullptr;
    }
}

void displayPoli_103012400269(ListPoli L) {
    adrPoli P = L.first;
    while (P != nullptr) {
        cout << "POLI: " << P->info.namaPoli << endl;
        cout << "Dokter: " << P->info.namaDokter << endl;
        cout << "Daftar Pasien:" << endl;
        displayPasien_103012400260(P->firstPasien);
        P = P->next;
    }
}

