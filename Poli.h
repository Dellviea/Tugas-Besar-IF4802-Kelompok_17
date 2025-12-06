#ifndef POLI_H_INCLUDED
#define POLI_H_INCLUDED

#include "pasien.h"
using namespace std;

typedef struct ElmPoli* adrPoli;

struct DataPoli {
    string idPoli;
    string namaPoli;
    string idDokter;
    string namaDokter;
};

struct ElmPoli {
    DataPoli info;
    adrPoli next;
    adrPasien pasien; 
};

struct ListPoli {
    adrPoli first;
};

void createListPoli(ListPoli &L);
adrPoli allocatePoli(DataPoli data);
bool isEmptyPoli(ListPoli L);
void insertFirstPoli(ListPoli &L, adrPoli P);
void insertLastPoli(ListPoli &L, adrPoli P);
void insertAfterPoli(ListPoli &L, adrPoli Prec, adrPoli P);
void deleteFirstPoli(ListPoli &L, adrPoli &P);
void deleteLastPoli(ListPoli &L, adrPoli &P);
void deleteAfterPoli(ListPoli &L, adrPoli Prec, adrPoli &P);
displayPasien(adrPasien P);
adrPoli findPoliByID(ListPoli L, string id);
int hitungTotalPasien(ListPoli L);


#endif
