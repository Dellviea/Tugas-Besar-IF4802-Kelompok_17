#include <iostream>
#include "header.h"
using namespace std;

void main_admin();
void main_user();

int main() {
    int pilih, parent, child;

    ListPoli L;
    createListPoli_103012400260(L);

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Parent (Poli)\n";
        cout << "2. Child (Pasien)\n";
        cout << "0. Keluar\n";
        cout << "Pilih: "; cin >> pilih;

        switch (pilih) {
            // ============================
            // CASE 1 = MENU POLI (PARENT)
            // ============================
            case 1:
                cout << "\n=== MENU UTAMA ===\n";
                cout << "1. Insert First Poli\n";
                cout << "2. Insert Last Poli\n";
                cout << "3. Insert After Poli\n";
                cout << "4. Delete First Poli\n";
                cout << "5. Delete Last Poli\n";
                cout << "6. Delete After Poli\n";
                cout << "7. Find Poli \n";
                cout << "8. Display Poli\n";
                cout << "0. Kembali\n";
                cout << "Pilih: "; cin >> parent;

                switch (parent) {
                // ===== INSERT FIRST =====
                case 1: {
                    DataPoli x;
                    cout << "ID Poli: "; cin >> x.idPoli;
                    cout << "Nama Poli: "; cin >> x.namaPoli;
                    cout << "ID Dokter: "; cin >> x.idDokter;
                    cout << "Nama Dokter: "; cin >> x.namaDokter;

                    adrPoli P = allocatePoli_103012400260(x);
                    insertFirstPoli_103012400260(L, P);
                    cout << "Insert First Berhasil!\n";
                    break;
                }

                // ===== INSERT LAST =====
                case 2: {
                    DataPoli x;
                    cout << "ID Poli: "; cin >> x.idPoli;
                    cout << "Nama Poli: "; cin >> x.namaPoli;
                    cout << "ID Dokter: "; cin >> x.idDokter;
                    cout << "Nama Dokter: "; cin >> x.namaDokter;

                    adrPoli P = allocatePoli_103012400260(x);
                    insertLastPoli_103012400029(L, P);
                    cout << "Insert Last Berhasil!\n";
                    break;
                }
                
                // ===== INSERT AFTER =====
                case 3: {
                    string key;
                    cout << "Masukkan nama poli untuk tempat setelahnya: ";
                    cin >> key;

                    adrPoli Prec = findElementPoliByName(L, key);
                    if (Prec == nullptr) {
                        cout << "Poli tidak ditemukan!\n";
                    } else {
                        DataPoli x;
                        cout << "ID Poli baru: "; cin >> x.idPoli;
                        cout << "Nama Poli baru: "; cin >> x.namaPoli;
                        cout << "ID Dokter baru: "; cin >> x.idDokter;
                        cout << "Nama Dokter baru: "; cin >> x.namaDokter;

                        adrPoli P = allocatePoli_103012400260(x);
                        insertAfterPoli_103012400029(Prec, P);
                        cout << "Insert After Berhasil!\n";
                    }
                    break;
                }

                // ===== DELETE FIRST =====
                case 4: {
                    adrPoli P;
                    deleteFirstPoli_103012400029(L, P);
                    if (P != nullptr)
                        cout << "Delete First: " << P->info.namaPoli << " berhasil dihapus.\n";
                    else
                        cout << "List kosong!\n";
                    break;
                }

                // ===== DELETE LAST =====
                case 5: {
                    adrPoli P;
                    deleteLastPoli_103012400269(L, P);
                    if (P != nullptr)
                        cout << "Delete Last: " << P->info.namaPoli << " berhasil dihapus.\n";
                    else
                        cout << "List kosong!\n";
                    break;
                }

                // ===== DELETE AFTER =====
                case 6: {
                    string key;
                    cout << "Masukkan nama poli sebagai Prec: ";
                    cin >> key;

                    adrPoli Prec = findElementPoliByName(L, key);
                    if (Prec == nullptr || Prec->next == nullptr) {
                        cout << "Tidak bisa delete after!\n";
                    } else {
                        adrPoli P;
                        deleteAfterPoli_103012400269(Prec, P);
                        cout << "Delete After: " << P->info.namaPoli << " berhasil dihapus.\n";
                    }
                    break;
                }

                // ===== FIND POLI =====
                case 7: {
                    string key;
                    cout << "Masukkan nama poli yg dicari: ";
                    cin >> key;

                    adrPoli P = findElementPoliByName(L, key);
                    if (P != nullptr) {
                        cout << "Poli ditemukan!\n";
                        cout << "ID Poli: " << P->info.idPoli << endl;
                        cout << "Nama Poli: " << P->info.namaPoli << endl;
                        cout << "ID Dokter: " << P->info.idDokter << endl;
                        cout << "Nama Dokter: " << P->info.namaDokter << endl;
                    } else {
                        cout << "Poli tidak ditemukan!\n";
                    }
                    break;
                }

                // ===== DISPLAY POLI =====
                case 8: {
                    displayPoli_103012400269(L);
                    break;
                }

                // ===== KEMBALI =====
                case 0: {
                    cout << "Kembali ke menu sebelumnya...\n";
                    return;
                }
                default:
                    cout << "Pilihan salah!\n";
                }
                break;

            // ======================================================
            // ===============       MENU PASIEN       ==============
            // ======================================================
            case 2: {
                cout << "\n=== MENU PASIEN ===\n";
                cout << "1. Insert First Pasien\n";
                cout << "2. Insert Last Pasien\n";
                cout << "3. Insert After Pasien\n";
                cout << "4. Delete First Pasien\n";
                cout << "5. Delete Last Pasien\n";
                cout << "6. Delete After Pasien\n";
                cout << "7. Find Pasien\n";
                cout << "8. Display Pasien\n";
                cout << "0. Kembali\n";
                cout << "Pilih: "; cin >> child;

                switch (child) {

                // ============================
                // 1. INSERT FIRST PASIEN
                // ============================
                case 1: {
                    cout << "\n=== Insert First Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Masukkan nama poli: ";
                    cin >> namaPoli;
                    
                   adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                       cout << "Poli tidak ditemukan!\n";
                       break;
                    }

                    DataPasien x;
                    cout << "ID Pasien: "; cin >> x.idPasien;
                    cout << "Nama Pasien: "; cin >> x.namaPasien;
                    cout << "Tanggal Kunjungan: "; cin >> x.tanggalKunjungan;

                    adrPasien Q = allocatePasien_103012400260(x);
                    insertFirstPasien_103012400029(P->firstPasien, Q);

                    cout << "Insert First Pasien berhasil!\n";
                    break;
                }

                // 2. INSERT LAST
                case 2: {
                    cout << "\n=== Insert LAST Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }
                    
                    string namaPoli;
                    cout << "Masukkan nama poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    DataPasien x;
                    cout << "ID Pasien: "; cin >> x.idPasien;
                    cout << "Nama Pasien: "; cin >> x.namaPasien;
                    cout << "Tanggal Kunjungan: "; cin >> x.tanggalKunjungan;

                    adrPasien Q = allocatePasien_103012400260(x);
                    insertLastPasien_103012400029(P->firstPasien, Q);

                   cout << "Insert Last Pasien berhasil!\n";
                    break;
                }

                // 3. INSERT AFTER
                case 3: {
                    cout << "\n=== INSERT AFTER Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Masukkan nama poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    string namaBefore;
                    cout << "Nama pasien sebagai Prec: ";
                    cin >> namaBefore;

                    ListPasien LP{P->firstPasien};
                    adrPasien Prec = findElementPasien(LP, namaBefore);

                    if (!Prec) {
                        cout << "Pasien tidak ditemukan!\n";
                        break;
                    }

                    DataPasien x;
                    cout << "ID Pasien Baru: "; cin >> x.idPasien;
                    cout << "Nama Pasien Baru: "; cin >> x.namaPasien;
                    cout << "Tanggal Kunjungan Baru: "; cin >> x.tanggalKunjungan;

                    adrPasien Q = allocatePasien_103012400260(x);
                    insertAfterPasien_103012400029(Prec, Q);

                    cout << "Insert After Pasien berhasil!\n";
                    break;
                }

                // 4. DELETE FIRST
                case 4: {
                    cout << "\n=== DELETE FIRST Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Nama Poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    adrPasien Q;
                    deleteFirstPasien_103012400269(P->firstPasien, Q);

                    if (Q)
                        cout << "Pasien " << Q->info.namaPasien << " dihapus.\n";
                    else
                        cout << "Tidak ada pasien.\n";
                    break;
                }

                // 5. DELETE LAST
                case 5: {
                    cout << "\n=== DELETE LAST Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Nama Poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    adrPasien Q;
                    deleteLastPasien_103012400269(P->firstPasien, Q);

                    if (Q)
                        cout << "Pasien " << Q->info.namaPasien << " dihapus.\n";
                    else
                        cout << "Tidak ada pasien.\n";
                    break;
                }

                // 6. DELETE AFTER
                case 6: {
                    cout << "\n=== DELETE AFTER Pasien ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Nama Poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    string namaPrec;
                    cout << "Nama pasien sebagai Prec: ";
                    cin >> namaPrec;

                    ListPasien LP{P->firstPasien};
                    adrPasien Prec = findElementPasien(LP, namaPrec);

                    if (!Prec || !Prec->next) {
                        cout << "Tidak bisa delete after!\n";
                        break;
                    }

                    adrPasien Q;
                    deleteAfterPasien_103012400269(Prec, Q);

                    cout << "Pasien " << Q->info.namaPasien << " dihapus.\n";
                    break;
                }

                // 7. FIND PASIEN
                case 7: {
                    cout << "\n=== FIND PASIEN ===\n";

                    displayPoli_103012400269(L);

                    if (isEmptyPoli_103012400260(L)) {
                        cout << "Poli tidak ada dalam List.\n";
                        break;
                    }

                    string namaPoli;
                    cout << "Nama Poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    string namaCari;
                    cout << "Nama pasien: ";
                    cin >> namaCari;

                    ListPasien LP{P->firstPasien};
                    adrPasien Q = findElementPasien(LP, namaCari);

                    if (Q) {
                        cout << "\nPasien ditemukan:\n";
                        cout << "ID: " << Q->info.idPasien << endl;
                        cout << "Nama: " << Q->info.namaPasien << endl;
                        cout << "Tanggal: " << Q->info.tanggalKunjungan << endl;
                    } else {
                        cout << "Pasien tidak ditemukan!\n";
                    }
                    break;
                }

                // 8. DISPLAY PASIEN
                case 8: {
                    string namaPoli;
                    cout << "Nama Poli: ";
                    cin >> namaPoli;

                    adrPoli P = findElementPoliByName(L, namaPoli);
                    if (!P) {
                        cout << "Poli tidak ditemukan!\n";
                        break;
                    }

                    cout << "\nDaftar pasien poli " << namaPoli << ":\n";
                    displayPasien_103012400260(P->firstPasien);

                    break;
                }

                // BACK
                case 0:
                    cout << "Kembali...\n";
                    break;

                default:
                    cout << "Pilihan salah!\n";
                }

                break;
            }

            // ======================================================
            // EXIT
            // ======================================================
            case 0:
                cout << "Keluar program...\n";
                break;

            default:
                cout << "Pilihan salah! Ulangi.\n";
            }

        } while (pilih != 0);

        return 0;
}