#include <iostream>
#include "header.h"
using namespace std;

adrPasien allocatePasien_103012400260(DataPasien pasien) {
    adrPasien P = new ElmPasien;
    P->info = pasien;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

bool isEmptyPasien_103012400260(adrPasien firstPasien) {
    return firstPasien == nullptr;
}

void displayPasien_103012400260(adrPasien firstPasien) {
    adrPasien P = firstPasien;
    while (P != nullptr) {
        cout << "ID: " << P->info.idPasien << endl;
        cout << "Nama: " << P->info.namaPasien << endl;
        cout << "Tanggal Kunjungan: " << P->info.tanggalKunjungan << endl;
        cout << endl;
        P = P->next;
    }
}


adrPasien findElementPasien(ListPasien L, string namaPasien){
    adrPasien P = L.first;
    while (P != nullptr) {
        if (P->info.namaPasien == namaPasien) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}