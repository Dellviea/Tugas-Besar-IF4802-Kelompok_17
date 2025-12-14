#include "header.h"
#include <iostream>
using namespace std;

void main_admin(ListPoli &L) {
    int pilih;

    do {
        cout << "\n===== MENU ADMIN =====\n";
        cout << "1. Kelola Poli\n";
        cout << "2. Kelola Pasien\n";
        cout << "3. Laporan & Statistik\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilih;

        // ===================== MENU POLI =====================
        if (pilih == 1) {
            int p;
            cout << "\n--- MENU POLI ---\n";
            cout << "1. Tambah Poli\n";
            cout << "2. Hapus Poli\n";
            cout << "3. Cari Poli\n";
            cout << "4. Tampilkan Semua Poli\n";
            cout << "0. Kembali\n";
            cout << "Pilih: ";
            cin >> p;

            if (p == 1) {
                DataPoli x;
                cout << "ID Poli: "; cin >> x.idPoli;
                cout << "Nama Poli: "; cin >> x.namaPoli;
                cout << "ID Dokter: "; cin >> x.idDokter;
                cout << "Nama Dokter: "; cin >> x.namaDokter;

                adrPoli P = allocatePoli_103012400260(x);
                insertLastPoli_103012400029(L, P);
            }
            else if (p == 2) {
                adrPoli P;
                deleteLastPoli_103012400269(L, P);
            }
            else if (p == 3) {
                string nama;
                cout << "Nama Poli: "; cin >> nama;
                adrPoli P = findElementPoliByName_103012400260(L, nama);
                if (P) cout << "Poli ditemukan\n";
                else cout << "Poli tidak ditemukan\n";
            }
            else if (p == 4) {
                displayPoli_103012400269(L);
            }
        }

        // ===================== MENU PASIEN =====================
        else if (pilih == 2) {
            int p;
            cout << "\n--- MENU PASIEN ---\n";
            cout << "1. Tambah Pasien ke Poli\n";
            cout << "2. Hapus Pasien dari Poli\n";
            cout << "0. Kembali\n";
            cout << "Pilih: ";
            cin >> p;

            if (p == 1) {
                string namaPoli;
                cout << "Nama Poli: "; cin >> namaPoli;
                adrPoli P = findElementPoliByName_103012400260(L, namaPoli);

                if (P) {
                    DataPasien x;
                    cout << "ID Pasien: "; cin >> x.idPasien;
                    cout << "Nama Pasien: "; cin >> x.namaPasien;
                    cout << "Tanggal: "; cin >> x.tanggalKunjungan;

                    adrPasien Q = allocatePasien_103012400260(x);
                    insertLastPasien_103012400029(P->firstPasien, Q);
                }
            }
        }

        // ===================== LAPORAN =====================
        else if (pilih == 3) {
            cout << "\n--- LAPORAN ---\n";
            adrPoli P = L.first;
            while (P) {
                cout << "Poli " << P->info.namaPoli
                     << " : " << countPasienPoli_103012400260(P->firstPasien)
                     << " pasien\n";
                P = P->next;
            }

            cout << "TOTAL PASIEN: "
                 << totalPasien_103012400260(L) << endl;
        }

    } while (pilih != 0);
}
