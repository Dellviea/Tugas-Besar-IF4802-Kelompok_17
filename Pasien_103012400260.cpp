#include "pasien.h"
#include <iostream>
using namespace std;

adrPasien allocatePasien(DataPasien pasien) {
    adrPasien P = new ElmPasien;
    P->info = pasien;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

bool isEmptyPasien_103012400260(ListPasien L) {
    return L.first == nullptr;
}

void displayPasien_103012400260(adrPasien P) {
    while (P != nullptr) {
        cout << "ID: " << P->info.idPasien
             << ", Nama: " << P->info.namaPasien
             << ", Tanggal: " << P->info.tanggalKunjungan << endl;
        P = P->next;
    }
}
