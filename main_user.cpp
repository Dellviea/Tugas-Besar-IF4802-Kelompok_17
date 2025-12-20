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
            string namaPoli;
            cout << "Nama Poli: ";
            cin >> namaPoli;

            adrPoli P = findElementPoliByName_103012400260(L, namaPoli);

            if (P != nullptr) {
                cout << "Dokter: " << P->info.namaDokter << endl;
                displayPasien_103012400260(P->firstPasien);
            } else {
                cout << "Poli tidak ditemukan\n";
            }
        }

        else if (pilih == 3) {
            string cari;
            cout << "Nama Pasien: ";
            cin >> cari;

            adrPoli P = L.first;
            bool ketemu = false;

            while (P != nullptr && !ketemu) {
                ListPasien LP;
                LP.first = P->firstPasien;

                adrPasien Q = findElementPasien_103012400260(LP, cari);

                if (Q != nullptr) {
                    cout << "Pasien ditemukan di Poli "
                         << P->info.namaPoli << endl;
                    ketemu = true;
                }
                P = P->next;
            }

            if (!ketemu) {
                cout << "Pasien tidak ditemukan\n";
            }
        }

    } while (pilih != 0);
}
