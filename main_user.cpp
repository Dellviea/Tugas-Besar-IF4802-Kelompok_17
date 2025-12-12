// #include <iostream>
// #include "header.h"
// using namespace std;

// int main() {
//     ListPoli L;
//     createListPoli_103012400260(L);

//     int pilih;
//     do {
//         cout << "\n=== MENU USER ===\n";
//         cout << "1. Display Semua Poli\n";
//         cout << "2. Display Pasien per Poli\n";
//         cout << "3. Cari Poli\n";
//         cout << "4. Cari Pasien\n";
//         cout << "0. Keluar\n";
//         cout << "Pilih: "; cin >> pilih;

//         switch(pilih) {
//             case 1: // Display semua poli
//                 displayPoli_103012400269(L);
//                 break;

//             case 2: { // Display pasien per poli
//                 string namaPoli;
//                 cout << "Masukkan nama poli: "; cin >> namaPoli;
//                 adrPoli P = findElementPoliByName_103012400260(L, namaPoli);
//                 if (P) {
//                     cout << "\nDaftar pasien di Poli " << namaPoli << ":\n";
//                     displayPasien_103012400260(P->firstPasien);
//                 } else {
//                     cout << "Poli tidak ditemukan!\n";
//                 }
//                 break;
//             }

//             case 3: { // Cari Poli
//                 string namaPoli;
//                 cout << "Nama Poli yang dicari: "; cin >> namaPoli;
//                 adrPoli P = findElementPoliByName_103012400260(L, namaPoli);
//                 if (P) {
//                     cout << "Poli ditemukan!\n";
//                     cout << "ID Poli: " << P->info.idPoli << endl;
//                     cout << "Nama Poli: " << P->info.namaPoli << endl;
//                     cout << "Dokter: " << P->info.namaDokter << endl;
//                 } else {
//                     cout << "Poli tidak ditemukan!\n";
//                 }
//                 break;
//             }

//             case 4: { // Cari Pasien
//                 string namaPoli, namaPasien;
//                 cout << "Masukkan nama poli: "; cin >> namaPoli;
//                 adrPoli P = findElementPoliByName_103012400260(L, namaPoli);
//                 if (!P) {
//                     cout << "Poli tidak ditemukan!\n";
//                     break;
//                 }
//                 cout << "Masukkan nama pasien: "; cin >> namaPasien;
//                 adrPasien Q = findElementPasien_103012400260(P->firstPasien, namaPasien);
//                 if (Q) {
//                     cout << "\nPasien ditemukan!\n";
//                     cout << "ID: " << Q->info.idPasien << endl;
//                     cout << "Nama: " << Q->info.namaPasien << endl;
//                     cout << "Tanggal Kunjungan: " << Q->info.tanggalKunjungan << endl;
//                 } else {
//                     cout << "Pasien tidak ditemukan!\n";
//                 }
//                 break;
//             }

//             case 0:
//                 cout << "Keluar menu user...\n";
//                 break;

//             default:
//                 cout << "Pilihan salah!\n";
//         }

//     } while(pilih != 0);

//     return 0;
// }
