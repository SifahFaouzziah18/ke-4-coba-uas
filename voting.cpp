#include <iostream>
using namespace std;

int main() {
    int pilih;
    string layanan[2] = {"Cuci", "Cuci + Setrika"};
    int vote[2] = {0, 0};

    do {
        cout << "\n=== SISTEM VOTING LAYANAN LAUNDRY ===\n";
        cout << "1. " << layanan[0] << endl;
        cout << "2. " << layanan[1] << endl;
        cout << "3. Lihat Hasil Voting\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih == 1) {
            vote[0]++;
            cout << "Vote untuk layanan Cuci berhasil.\n";
        }
        else if (pilih == 2) {
            vote[1]++;
            cout << "Vote untuk layanan Cuci + Setrika berhasil.\n";
        }
        else if (pilih == 3) {
            cout << "\n=== HASIL VOTING ===\n";
            for (int i = 0; i < 2; i++) {
                cout << layanan[i] << " : " << vote[i] << " suara\n";
            }
        }
        else if (pilih == 4) {
            cout << "Terima kasih telah menggunakan sistem voting.\n";
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilih != 4);

    return 0;
}