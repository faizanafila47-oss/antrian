#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<pair<int, string>> antrean;
    int nomor = 0;
    int pilih;

    do {
        cout << "\n=== SISTEM ANTREAN ===" << endl;
        cout << "1. Ambil Nomor\n2. Panggil Berikutnya\n3. Lihat Sisa Antrean\n4. Keluar\nPilih: ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            string nama;
            cout << "Masukkan Nama: ";
            getline(cin, nama);
            nomor++;
            antrean.push({nomor, nama});
            cout << nama << " mendapat nomor antrean " << nomor << endl;
        }
        else if (pilih == 2) {
            if (antrean.empty()) {
                cout << "Antrean kosong!" << endl;
            } else {
                auto depan = antrean.front();
                antrean.pop();
                cout << "Memanggil nomor " << depan.first << " - " << depan.second << endl;
            }
        }
        else if (pilih == 3) {
            if (antrean.empty()) {
                cout << "Tidak ada antrean" << endl;
            } else {
                cout << "Sisa antrean:" << endl;
                queue<pair<int, string>> temp = antrean;
                while (!temp.empty()) {
                    cout << "Nomor " << temp.front().first << " - " << temp.front().second << endl;
                    temp.pop();
                }
            }
        }
    } while (pilih != 4);

    cout << "Terima kasih!" << endl;
    return 0;
}
