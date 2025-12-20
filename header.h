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

struct ListPasien  {
    adrPasien  first;
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
void insertFirstPasien_103012400029(adrPasien &firstPasien, adrPasien P);
void insertLastPasien_103012400029(adrPasien &firstPasien, adrPasien P);
void insertAfterPasien_103012400029(adrPasien Prec, adrPasien P);
void deleteFirstPasien_103012400269(adrPasien &firstPasien, adrPasien &P);
void deleteLastPasien_103012400269(adrPasien &firstPasien, adrPasien &P);
void deleteAfterPasien_103012400269(adrPasien Prec, adrPasien &P);
adrPasien findElementPasien_103012400260(ListPasien L, string namaPasien);
void displayPasien_103012400260(adrPasien firstPasien);


void createListPoli_103012400260(ListPoli &L);
adrPoli allocatePoli_103012400260(DataPoli data);
bool isEmptyPoli_103012400260(ListPoli L);
void insertFirstPoli_103012400260(ListPoli &L, adrPoli P);
void insertLastPoli_103012400029(ListPoli &L, adrPoli P);
void insertAfterPoli_103012400029(adrPoli Prec, adrPoli P);
void deleteFirstPoli_103012400029(ListPoli &L, adrPoli &P);
void deleteLastPoli_103012400269(ListPoli &L, adrPoli &P);
void deleteAfterPoli_103012400269(adrPoli Prec, adrPoli &P);
adrPoli findElementPoliByName_103012400260(ListPoli L, string namaPoli);
void displayPoli_103012400269(ListPoli L);
int countPasienPoli_103012400269(adrPasien firstPasien);
int totalPasien_103012400029(ListPoli L);


void main_admin(ListPoli &L);
void main_user(ListPoli &L);

#endif // HEADER_H_INCLUDED
