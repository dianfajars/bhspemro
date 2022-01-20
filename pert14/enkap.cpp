#include <iostream>
using namespace std;

class Jam{
    private:
        int jam=0, menit=0, detik=0;
    public:
    Jam(){  //method untuk input manual jamnya
        jam = 9;
        menit = 40;
        detik = 10;
    }
    void tambahJam(){ //method untuk menambah jam dari inputan sebelumnya
        jam++;
    }
    void tambahMenit(){ //method untuk menambah menit dari inputan sebelumnya
        menit++;
    }
    void tambahDetik(){ //method untuk menambah menit dari inputan sebelumnya
        detik++;
    }
    void displayJam(){
        cout << jam << ":" << menit << ":" << detik << endl;
    }
};

int main(){
    Jam calljam;
    calljam.displayJam(); //untuk menampilkan jam hasil inputan (9:40:10)
    calljam.tambahJam(); //untuk memanggil method tambahjam
    calljam.tambahMenit(); //untuk memanggil method tambahjam
    calljam.tambahDetik(); //untuk memanggil method tambahjam
    calljam.displayJam(); //untuk menampilkan jam hasil tambahan yang telah dideklarasikan diatas (10:41:11)
    return 0;
}