#include "poli.h"
#include <iostream>
using namespace std;

void createListPoli_103012400260(ListPoli &L) {
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmptyPoli_103012400260(ListPoli L) {
    return (L.first == nullptr);
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


void printPoli_103012400260(ListPoli L) {
    adrPoli P = L.first;
    while (P != nullptr) {
        cout << "Poli ID: " << P->info.idPoli << ", Nama: " << P->info.namaPoli
             << ", Lokasi: " << P->info.lokasiPoli << endl;
        cout << "Dokter: " << P->info.namaDokter << " (" << P->info.spesialis << ")" << endl;
        cout << "Daftar Pasien:" << endl;
        viewPasien(P->pasien);
        cout << endl;
        P = P->next;
    }
}