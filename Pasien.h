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

struct ListPasien {
    adrPasien first;
    adrPasien last;
};

void createListPasien(ListPasien &L);
adrPasien allocatePasien(DataPasien data);
bool isEmptyPasien(ListPasien L);
void insertFirstPasien(ListPasien &L, adrPasien P);
void insertLastPasien(ListPasien &L, adrPasien P);
void deleteFirstPasien(ListPasien &L, adrPasien &P);
void deleteLastPasien(ListPasien &L, adrPasien &P);
adrPasien findPasienByID(ListPasien L, string id);
void viewPasien(ListPasien L);
int countPasien(ListPasien L);

#endif
