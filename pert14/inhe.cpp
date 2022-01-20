#include <iostream>
 
using namespace std;
 
class Kendaraan { //class kendaraan
  protected:
    string jenis; //field yg ada dalam clas kendaraan, yakni jenis dan merk
    string merk;
};
 
class Mobil: public Kendaraan { //class mobil mewarisi class dari kendaraan 
  public:
    Mobil(string paramJenis, string paramMerk) {
      jenis = paramJenis;
      merk = paramMerk;
    }
 
    string lihatDetail() { //method untuk menampilkan detail dari class mobil yg mewariskan class kendaraan yg diinputkan
      return "Merk: " + merk + ", Jenis: "+ jenis;
    }
};
 
int main()
{
  Mobil toyota1("Matic","Avanza"); //inputan untuk class mobil
  Mobil toyota2("Manual","Innova");
 
  cout << toyota1.lihatDetail() << endl; //menampilkan class mobil
  cout << toyota2.lihatDetail() << endl;
  return 0;
}