#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int hargaBuku, jumlahBuku, hargaAsli;
    float hargaDiskon, diskon;

    cout << "-------------------------------" << endl;
    cout << "|        TOKO WIJAYA          |" << endl;
    cout << "-------------------------------" << endl;

    cout << "Masukkan harga satuan buku : Rp";
    cin  >> hargaBuku;
    cout << "Masukkan jumlah buku yang dibeli : ";
    cin  >> jumlahBuku;

    if (jumlahBuku > 100) {
        diskon = 0.2;
        cout << "Selamat anda mendapat diskon 20%" << endl;
    } else if (jumlahBuku >= 20) {
        diskon = 0.1;
        cout << "Selamat anda mendapat diskon 10%" << endl;
    } else {
        diskon = 0;
    }

    hargaDiskon = jumlahBuku * hargaBuku - jumlahBuku * hargaBuku * diskon;

    cout << "Harga setelah diskon adalah Rp" << fixed << setprecision(0) << hargaDiskon << endl;

    hargaAsli = jumlahBuku * hargaBuku;

    cout << "Harga Asli adalah Rp" << hargaAsli;
}
