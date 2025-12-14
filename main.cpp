#include "header.h"
#include <iostream>
using namespace std;

int main() {
    ListPoli L;
    createListPoli_103012400260(L);

    int pilih;
    do {
        cout << "\n=== SISTEM KLINIK ===\n";
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            main_admin(L);
        }
        else if (pilih == 2) {
            main_user(L);
        }

    } while (pilih != 0);

    return 0;
}
