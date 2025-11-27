#ifndef POLI_H_INCLUDED
#define POLI_H_INCLUDED

include <iostream>
using namespace std;

struct Poli {
    string kode;
    string namaPoli;
};

typedef struct ElmPoli *adrPoli;

struct ElmPoli {
    Poli info;
    adrPoli next;
};

struct ListPoli {
    adrPoli first;
};

#endif // POLI_H_INCLUDED
