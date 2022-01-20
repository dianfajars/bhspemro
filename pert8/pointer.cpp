#include <iostream>
using namespace std;

int main(){
    int a; //deklarasi variabel a bertipe data integer
    int *p; //deklarasi pointer p bertipe data integer

    a = 90; //variabel a bernilai 90
    p = &a; //pointer p menunjuk alamat ke memori dari variabel A

    cout << "-------Contoh Program Pointer Sangat Sederhana----------\n";
    cout << "Nilai A: " << a << endl;
    cout << "Alamat memori A " << &a << endl << endl;

     cout<<"Nilai yang ditunjuk *P: "<< *p <<endl;
     cout<<"Alamat yang ditunjuk *P: "<< p <<endl;
     cout<<"Alamat *P (&P): "<< &p << endl << endl;

     /* mengisi nilai 30 kedalam *p / alamat yang ditunjuk pointer p
    karena alamat memori yang ditunjuk pointer p merupakan alamat memori variabel a
    maka nilai dari variabel a juga ikut berubah*/
     *p = 30;

     cout<<"Nilai A   : " << a <<endl;
     cout<<"Alamat memori A : "<< &a <<endl<<endl;

     cout<<"Nilai yang ditunjuk *P: "<< *p <<endl;
     cout<<"Alamat yang ditunjuk *P: " << p <<endl;
     cout<<"Alamat *P (&P) : "<< &p << endl;

     return 0;
}