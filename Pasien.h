#ifndef DOKTER_H_INCLUDED
#define DOKTER_H_INCLUDED

#include <iostream>
using namespace std;

struct Pasien {
    string nama;
    string tanggalKunjungan;
};

typedef struct ElmPasien *adrPasien;

struct ElmPasien {
    Pasien info;
    adrPasien next;
};

struct Dokter {
    string id;
    string nama;
    string spesialis;
    adrPasien pasien;
};

typedef struct ElmDokter *adrDokter;

struct ElmDokter {
    Dokter info;
    adrDokter next;
};

struct ListDokter {
    adrDokter first;
};

#endif // DOKTER_H_INCLUDED
