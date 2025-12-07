#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct ElmPasien* adrPasien;
typedef struct ElmPoli* adrPoli;

struct DataPasien {
    string idPasien;
    string namaPasien;
    string tanggalKunjungan;
};

struct ElmPasien {
    DataPasien info;
    adrPasien next;
    adrPasien prev;
};

struct DataPoli {
    string idPoli;
    string namaPoli;
    string idDokter;
    string namaDokter;
};

struct ElmPoli {
    DataPoli info;
    adrPoli next;
    adrPasien firstPasien;
};

struct ListPoli {
    adrPoli first;
};


adrPasien allocatePasien_103012400260(DataPasien pasien);
bool isEmptyPasien_103012400260(adrPasien firstPasien);
void insertFirstPasien(adrPasien &firstPasien, adrPasien P);
void insertLastPasien(adrPasien &firstPasien, adrPasien P);
void insertAfterPasien(adrPasien Prec, adrPasien P);
void deleteFirstPasien(adrPasien &firstPasien, adrPasien &P);
void deleteLastPasien(adrPasien &firstPasien, adrPasien &P);
void deleteAfterPasien(adrPasien Prec, adrPasien &P);
void displayPasien_103012400260(adrPasien firstPasien);

void createListPoli_103012400260(ListPoli &L);
adrPoli allocatePoli_103012400260(DataPoli data);
bool isEmptyPoli_103012400260(ListPoli L);
void insertFirstPoli_103012400260(ListPoli &L, adrPoli P);
void insertLastPoli(ListPoli &L, adrPoli P);
void insertAfterPoli(adrPoli Prec, adrPoli P);
void deleteFirstPoli(ListPoli &L, adrPoli &P);
void deleteLastPoli(ListPoli &L, adrPoli &P);
void deleteAfterPoli(adrPoli Prec, adrPoli &P);
void displayPoli(ListPoli L);


#endif // HEADER_H_INCLUDED
