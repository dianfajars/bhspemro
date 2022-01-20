#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
    char kdbaju[5], ukbaju[5], jenis[30];
    int harga, jmlh, total;

    cout << "======================================"<<endl;
    cout << "\t Perusahaan XYZ"<<endl;
    cout << "======================================"<<endl;
    cout << "Daftar Jenis Baju Yang Dijual"<<endl;
    cout << "1. IMP "<<endl;
    cout << "2. Prada "<<endl;
    cout << "3. Gucci "<<endl;
    cout << "4. Louis Vuitton "<<endl;
    cout << "5. Kick Denim "<<endl;
    cout << "======================================"<<endl;
    cout << "Masukkan Kode Pakaian [1/2/3/4/5] : "; cin >> kdbaju;
    cout << "Masukkan Ukuran [S/M/L/XL] : "; cin >> ukbaju;
    cout << "Jumlah Pembelian : "; cin >> jmlh;

    if (!strcmp(kdbaju,"1")){
        strcpy(jenis,"IMP");
        if (!strcmp(ukbaju,"S") || !strcmp(ukbaju,"s"))
        {
            harga = 200000;
        }
        else if (!strcmp(ukbaju,"M") || !strcmp(ukbaju,"m"))
        {
            harga = 220000;
        }
        else
        {
            harga = 220000;
        }

    }

    else if (!strcmp(kdbaju,"2")){
        strcpy(jenis,"Prada");
        if (!strcmp(ukbaju,"S") || !strcmp(ukbaju,"s"))
        {
            harga = 150000;
        }
        else if (!strcmp(ukbaju,"M") || !strcmp(ukbaju,"m"))
        {
            harga = 160000;
        }
        else
        {
            harga = 170000;
        }
    }

    else if (!strcmp(kdbaju,"3")){
        strcpy(jenis,"Gucci");
        if (!strcmp(ukbaju,"S") || !strcmp(ukbaju,"s"))
        {
            harga = 200000;
        }
        else if (!strcmp(ukbaju,"M") || !strcmp(ukbaju,"m"))
        {
            harga = 200000;
        }
        else
        {
            harga = 200000;
        }
    }

    else if (!strcmp(kdbaju,"4")){
        strcpy(jenis,"Louis Vuitton");
        if (!strcmp(ukbaju,"S") || !strcmp(ukbaju,"s"))
        {
            harga = 300000;
        }
        else if (!strcmp(ukbaju,"M") || !strcmp(ukbaju,"m"))
        {
            harga = 300000;
        }
        else
        {
            harga = 350000;
        }
    }

     else if (!strcmp(kdbaju,"5")){
        strcpy(jenis,"Kick Denim");
        if (!strcmp(ukbaju,"S") || !strcmp(ukbaju,"s"))
        {
            harga = 100000;
        }
        else if (!strcmp(ukbaju,"M") || !strcmp(ukbaju,"m"))
        {
            harga = 120000;
        }
        else
        {
            harga = 130000;
        }
    }

    else
    {
        strcpy(jenis,"Salah Memasukkan Jenis Pakaian");
    }
    
    total=jmlh*harga;

    cout << "--------------------------------"<<endl;
    cout << "\t Struk Pembelanjaan"<<endl;
    cout << "--------------------------------"<<endl;
    cout << "Jenis Pakaian : "<<jenis<<endl;
    cout << "Ukuran : "<<ukbaju<<endl;
    cout << "Harga : Rp."<<harga<<endl;
    cout << "Jumlah Pembelian : "<<jmlh<<endl;
    cout << "Total : Rp."<<total<<endl;
    cout << "--------------------------------"<<endl;
    cout << "\t TERIMA KASIH "<<endl;
    getch();
    return 0;
}