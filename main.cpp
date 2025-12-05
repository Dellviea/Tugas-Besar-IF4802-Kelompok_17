#include <iostream>

using namespace std;

int main()
{

void menuAdmin();
void menuUser();

int main() {
    int pilih;
    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Login Admin\n";
        cout << "2. Login User\n";
        cout << "0. Keluar\n";
        cout << "Pilih: "; cin >> pilih;

        switch (pilih) {
            case 1:
                menuAdmin();
                break;
            case 2:
                menuUser();
                break;
            case 0:
                cout << "Keluar program.\n";
                break;
            default:
                cout << "Pilihan salah! Coba lagi.\n";
        }
    } while (pilih != 0);

    return 0;
}