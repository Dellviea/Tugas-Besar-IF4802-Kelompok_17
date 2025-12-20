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

        // ================= MENU POLI =================
        if (pilih == 1) {
            int menuPoli;
            cout << "\n--- MENU POLI ---\n";
            cout << "1. Insert First Poli\n";
            cout << "2. Insert Last Poli\n";
            cout << "3. Insert After Poli\n";
            cout << "4. Delete First Poli\n";
            cout << "5. Delete Last Poli\n";
            cout << "6. Delete After Poli\n";
            cout << "7. Cari Poli\n";
            cout << "8. Tampilkan Semua Poli\n";
            cout << "0. Kembali\n";
            cout << "Pilih: ";
            cin >> menuPoli;

            if (menuPoli == 1) {
                DataPoli x;
                cout << "ID Poli: ";
                cin >> x.idPoli;
                cout << "Nama Poli: ";
                cin >> x.namaPoli;
                cout << "ID Dokter: ";
                cin >> x.idDokter;
                cout << "Nama Dokter: ";
                cin >> x.namaDokter;

                adrPoli P = allocatePoli_103012400260(x);
                insertFirstPoli_103012400260(L, P);

            }else if (menuPoli == 2) {
                DataPoli x;
                cout << "ID Poli: ";
                cin >> x.idPoli;
                cout << "Nama Poli: ";
                cin >> x.namaPoli;
                cout << "ID Dokter: ";
                cin >> x.idDokter;
                cout << "Nama Dokter: ";
                cin >> x.namaDokter;
                adrPoli P = allocatePoli_103012400260(x);
                insertLastPoli_103012400029(L, P);

            }else if (menuPoli == 3) {
                string namaPoli;
                cout << "Nama Poli sebagai Prec: ";
                cin >> namaPoli;
                adrPoli Prec = findElementPoliByName_103012400260(L, namaPoli);
                if (Prec != nullptr) {
                    DataPoli x;
                    cout << "ID Poli baru: ";
                    cin >> x.idPoli;
                    cout << "Nama Poli baru: ";
                    cin >> x.namaPoli;
                    cout << "ID Dokter baru: ";
                    cin >> x.idDokter;
                    cout << "Nama Dokter baru: ";
                    cin >> x.namaDokter;
                    adrPoli P = allocatePoli_103012400260(x);
                    insertAfterPoli_103012400029(Prec, P);
                } else {
                    cout << "Poli tidak ditemukan\n";
                }

            }else if (menuPoli == 4) {
                adrPoli P;
                deleteFirstPoli_103012400029(L, P);

            }else if (menuPoli == 5) {
                adrPoli P;
                deleteLastPoli_103012400269(L, P);

            }else if (menuPoli == 6) {
                string namaPoli;
                cout << "Nama Poli sebagai Prec: ";
                cin >> namaPoli;
                adrPoli Prec = findElementPoliByName_103012400260(L, namaPoli);
                if (Prec != nullptr) {
                    adrPoli P;
                    deleteAfterPoli_103012400269(Prec, P);
                } else {
                    cout << "Poli tidak ditemukan\n";
                }

            }else if (menuPoli == 7) {
                string namaPoli;
                cout << "Nama Poli: ";
                cin >> namaPoli;
                adrPoli P = findElementPoliByName_103012400260(L, namaPoli);
                if (P != nullptr) {
                    cout << "Poli ditemukan\n";
                } else {
                    cout << "Poli tidak ditemukan\n";
                }

            }else if (menuPoli == 8) {
                displayPoli_103012400269(L);
            }

            // ================= MENU PASIEN =================
        }else if (pilih == 2) {
            int menuPasien;
            cout << "\n--- MENU PASIEN ---\n";
            cout << "1. Insert First Pasien\n";
            cout << "2. Insert Last Pasien\n";
            cout << "3. Insert After Pasien\n";
            cout << "4. Delete First Pasien\n";
            cout << "5. Delete Last Pasien\n";
            cout << "6. Delete After Pasien\n";
            cout << "0. Kembali\n";
            cout << "Pilih: ";
            cin >> menuPasien;

            string namaPoli;
            cout << "Nama Poli: ";
            cin >> namaPoli;
            adrPoli poli = findElementPoliByName_103012400260(L, namaPoli);
            if (poli == nullptr) {
                cout << "Poli tidak ditemukan\n";
            } else {
                if (menuPasien == 1) {
                    DataPasien x;
                    cout << "ID Pasien: ";
                    cin >> x.idPasien;
                    cout << "Nama Pasien: ";
                    cin >> x.namaPasien;
                    cout << "Tanggal Kunjungan: ";
                    cin >> x.tanggalKunjungan;
                    adrPasien Q = allocatePasien_103012400260(x);
                    insertFirstPasien_103012400029(poli->firstPasien, Q);

                }else if (menuPasien == 2) {
                    DataPasien x;
                    cout << "ID Pasien: ";
                    cin >> x.idPasien;
                    cout << "Nama Pasien: ";
                    cin >> x.namaPasien;
                    cout << "Tanggal Kunjungan: ";
                    cin >> x.tanggalKunjungan;
                    adrPasien Q = allocatePasien_103012400260(x);
                    insertLastPasien_103012400029(poli->firstPasien, Q);

                }else if (menuPasien == 3) {
                    string namaPasien;
                    cout << "Nama Pasien sebagai Prec: ";
                    cin >> namaPasien;
                    ListPasien LP;
                    LP.first = poli->firstPasien;
                    adrPasien Prec = findElementPasien_103012400260(LP, namaPasien);
                    if (Prec != nullptr) {
                        DataPasien x;
                        cout << "ID Pasien baru: ";
                        cin >> x.idPasien;
                        cout << "Nama Pasien baru: ";
                        cin >> x.namaPasien;
                        cout << "Tanggal Kunjungan: ";
                        cin >> x.tanggalKunjungan;
                        adrPasien Q = allocatePasien_103012400260(x);
                        insertAfterPasien_103012400029(Prec, Q);
                    } else {
                        cout << "Pasien tidak ditemukan\n";
                    }

                }else if (menuPasien == 4) {
                    adrPasien Q;
                    deleteFirstPasien_103012400269(poli->firstPasien, Q);

                }else if (menuPasien == 5) {
                    adrPasien Q;
                    deleteLastPasien_103012400269(poli->firstPasien, Q);

                }else if (menuPasien == 6) {
                    string namaPasien;
                    cout << "Nama Pasien sebagai Prec: ";
                    cin >> namaPasien;
                    ListPasien LP;
                    LP.first = poli->firstPasien;
                    adrPasien Prec = findElementPasien_103012400260(LP, namaPasien);
                    if (Prec != nullptr) {
                        adrPasien Q;
                        deleteAfterPasien_103012400269(Prec, Q);
                    } else {
                        cout << "Pasien tidak ditemukan\n";
                    }
                }
            }

            // ================= LAPORAN & STATISTIK =================
        }else if (pilih == 3) {
            adrPoli P = L.first;
            while (P != nullptr) {
                cout << "Poli " << P->info.namaPoli
                     << " : "
                     << countPasienPoli_103012400269(P->firstPasien)
                     << " pasien\n";
                P = P->next;
            }

            cout << "Total Pasien Seluruh Poli: "
                 << totalPasien_103012400029(L) << endl;

        }

    } while (pilih != 0);
}
