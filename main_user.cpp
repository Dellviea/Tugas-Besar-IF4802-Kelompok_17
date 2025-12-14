#include "header.h"
#include <iostream>
using namespace std;

void main_user(ListPoli &L) {
    int pilih;

    do {
        cout << "\n===== MENU USER =====\n";
        cout << "1. Lihat Semua Poli\n";
        cout << "2. Detail Poli (Dokter + Pasien)\n";
        cout << "3. Cari Pasien\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            displayPoli_103012400269(L);
        }
        else if (pilih == 2) {
            string nama;
            cout << "Nama Poli: "; cin >> nama;
            adrPoli P = findElementPoliByName_103012400260(L, nama);
            if (P) {
                cout << "Dokter: " << P->info.namaDokter << endl;
                displayPasien_103012400260(P->firstPasien);
            }
        }
        else if (pilih == 3) {
            string cari;
            cout << "Nama Pasien: "; cin >> cari;
            adrPoli P = L.first;
            while (P) {
                ListPasien LP{P->firstPasien};
                adrPasien Q = findElementPasien_103012400260(LP, cari);
                if (Q) {
                    cout << "Pasien ditemukan di Poli "
                         << P->info.namaPoli << endl;
                    break;
                }
                P = P->next;
            }
        }

    } while (pilih != 0);
}
