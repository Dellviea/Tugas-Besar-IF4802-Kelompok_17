#ifndef POLI_H_INCLUDED
#define POLI_H_INCLUDED

#include <string>
#include "pasien.h"
using namespace std;

struct DataPoli {
    string idPoli;
    string namaPoli;
    string lokasiPoli;
    string idDokter;
    string namaDokter;
    string spesialis;
};

struct ElmPoli {
    DataPoli info;
    ElmPoli *next;
    ListPasien pasien;
};

struct ListPoli {
    ElmPoli *first;
};

void createListPoli(ListPoli &L);
ElmPoli* allocatePoli(DataPoli data);
bool isEmptyPoli(ListPoli L);
void insertFirstPoli(ListPoli &L, ElmPoli *P);
void insertLastPoli(ListPoli &L, ElmPoli *P);
void deleteFirstPoli(ListPoli &L, ElmPoli *&P);
void deleteLastPoli(ListPoli &L, ElmPoli *&P);
ElmPoli* findPoliByID(ListPoli L, string id);
void printPoli(ListPoli L);

#endif
