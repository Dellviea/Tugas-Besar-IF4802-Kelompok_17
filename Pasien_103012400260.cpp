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


adrPasien findElementPasien_103012400260(ListPasien L, string namaPasien){
    adrPasien P = L.first;
    while (P != nullptr) {
        if (P->info.namaPasien == namaPasien) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

int totalPasien_103012400260(ListPoli L) {
    int total = 0;
    adrPoli P = L.first;
    while (P != nullptr) {
        total += countPasienPoli_103012400260(P->firstPasien);
        P = P->next;
    }
    return total;
}
