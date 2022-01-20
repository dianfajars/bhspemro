#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct maha{
    char nama[30];
    char search[30];
}siswa[20];

enum jawab{
    benar, salah
}ketemu;

int searching(int a, maha siswa[20]){
    int i, j;
    ketemu = salah;
    for (i=0 ; i<a ; i++){
        j=0;
        while (j<30){
            if (siswa[i].nama[j] == siswa[20].search[j]){
                if (j==29 && siswa[i].nama[29] == siswa[20].search[29]){
                    ketemu = benar;
                    break;
                }
                j++;
            }
            else if(siswa[i].nama[j] != siswa[20].search[j]){
                break;
            }
        }
    }
    return ketemu;
}

int main(){
    int x, i;
    char input[20];

    cout << "Masukkan jumlah nama : ";
    cin >> input;
    x=atoi(input);

    cout << "Masukkan nama: "<< endl;
    for(i=0 ; i<x ; i++){
        cin >> siswa[i].nama;
    }

    cout << "Masukkan nama yang akan dicari: ";
    cin >> siswa[20].search;

    cout << "\nNama yang anda cari ";
    if (searching(x, siswa) == benar){
        cout << "Ditemukan \n";
    }
    else{
        cout << "Tidak ditemukan \n";
    }
    return 0;
}