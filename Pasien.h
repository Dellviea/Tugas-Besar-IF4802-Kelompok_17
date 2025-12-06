#ifndef PASIEN_H_INCLUDED
#define PASIEN_H_INCLUDED

using namespace std;

typedef struct ElmPasien* adrPasien;

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

adrPasien allocatePasien(DataPasien data);
bool isEmptyPasien(ListPasien L);
void insertFirstPasien(ListPasien &L, adrPasien P);
void insertLastPasien(ListPasien &L, adrPasien P);
void insertAfterPasien(ListPasien &L, adrPasien Prec, adrPasien P);
void deleteFirstPasien(ListPasien &L, adrPasien &P);
void deleteLastPasien(ListPasien &L, adrPasien &P);
void deleteAfterPasien(ListPasien &L, adrPasien Prec, adrPasien &P);
displayPasien(adrPasien P);

#endif
