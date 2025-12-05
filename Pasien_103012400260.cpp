#include "pasien.h"
#include <iostream>
using namespace std;

void createListPasien_103012400260(ListPasien &L) {
    L.first = nullptr;
    L.last = nullptr;
}

adrPasien allocatePasien_103012400260(DataPasien pasien) {
    adrPasien P = new ElmPasien;
    P->info = pasien;
    P->next = nullptr;
    return P;
}

bool isEmptyPasien_103012400260(ListPasien L) {
    return (L.first == nullptr);
}

void insertFirstPasien_103012400260(ListPasien &L, adrPasien P) {
    if (isEmptyPasien(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}

void insertLastPasien_103012400260(ListPasien &L, adrPasien P) {
    if (isEmptyPasien(L)) {
        L.first = P;
        L.last = P;
    } else {
        L.last->next = P;
        L.last = P;
    }
}


adrPasien findPasienByID_103012400260(ListPasien L, string id) {
    adrPasien P = L.first;
    while (P != nullptr) {
        if (P->info.idPasien == id) return P;
        P = P->next;
    }
    return nullptr;
}

int countPasien_103012400260(ListPasien L) {
    int count = 0;
    adrPasien P = L.first;
    while (P != nullptr) {
        count++;
        P = P->next;
    }
    return count;
}
