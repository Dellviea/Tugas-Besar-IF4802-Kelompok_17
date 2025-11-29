#ifndef DOKTER_H_INCLUDED
#define DOKTER_H_INCLUDED

#include <string>
using namespace std;

struct DataPasien {
    string idPasien;
    string namaPasien;
    string tanggalKunjungan;
};

struct ElmPasien {
    DataPasien info;
    ElmPasien *next;
};

struct ListPasien {
    ElmPasien *first;
};

void createListPasien(ListPasien &L);
ElmPasien* allocatePasien(DataPasien data);
bool isEmptyPasien(ListPasien L);
void insertFirstPasien(ListPasien &L, ElmPasien *P);
void insertLastPasien(ListPasien &L, ElmPasien *P);
void deleteFirstPasien(ListPasien &L, ElmPasien *&P);
void deleteLastPasien(ListPasien &L, ElmPasien *&P);
ElmPasien* findPasienByID(ListPasien L, string id);
void printPasien(ListPasien L);

#endif 
