#include <iostream>
using namespace std;

double x, y, t, k, l, b;
int o;

void masukan(){ //function untuk masukan
    cout << "Masukkan angka pertama: "; cin >> x; 
    cout << "Masukkan angka kedua: "; cin >> y;
}

void penjumlahan(){ //function untuk penjumlahan
    masukan(); //untuk mengakses function masukan
    t = x + y;
    cout << "Hasil = "<< t << endl;
}

void pengurangan(){ //function untuk pengurangan
    masukan(); //untuk mengakses function masukan
    k = x - y;
    cout << "Hasil = "<< k << endl;
}

void perkalian(){ //function untuk perkalian
    masukan();//untuk mengakses function masukan
    l = x * y;
    cout << "Hasil = "<< l << endl;
}

void pembagian(){ //function untuk pembagian
    masukan();//untuk mengakses function masukan
    b = x / y;
    cout << "Hasil = "<< b << endl;
}

void keluar(){ //function untuk keluar
    cout << "Terima Kasih" << endl;
}

int main(){
    cout << "\tKalkulator C++ Sederhana" << endl;    
    cout << "1. Operasi Penjumlahan" << endl;    
    cout << "2. Operasi Pengurangan" << endl;    
    cout << "3. Operasi Perkalian" << endl;    
    cout << "4. Operasi Pembagian" << endl;    
    cout << "5. Keluar" << endl;
    cout << "Masukkan Pilihan Anda (1-5): "; cin >> o;

    switch (o)
    {
    case 1 : penjumlahan();//untuk mengakses function penjumlahan
        break;
    case 2 : pengurangan();//untuk mengakses function pengurangan
        break;
    case 3 : perkalian();//untuk mengakses function perkalian
        break;
    case 4 : pembagian();//untuk mengakses function pembagian
        break;
    case 5 : keluar();//untuk mengakses function keluar
        break;
    default:
    cout << "Menu tidak tersedia!!!" << endl;
        break;
    }
    return 0;
}