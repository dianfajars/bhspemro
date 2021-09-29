#include <iostream>
using namespace std;

int main(){
	int bil;
    cout<<"PROGRAM C++ MENENTUKAN BILANGAN GANJIL ATAU GENAP"<<endl;
    cout<<"================================================="<<endl;
	cout<<"Masukan Bilangan : ";
	cin>>bil;
	cout<<endl;

	if (bil%2==0){
		cout<<bil<<" Adalah bilangan GENAP"<<endl;
	}else {
		cout<<bil<<" Adalah bilangan GANJIL"<<endl;	
	}
    return 0;
}