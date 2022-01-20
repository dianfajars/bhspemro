#include <iostream>
using namespace std;

int main(){

    //fibo_n = fibo_n1 + fibo_m2

    int n, fibo_n, fibo_n1=1, fibo_n2=0;

    
    cout<<"Program Deret Fibonacci"<<endl;
    cout<<"Masukan nilai ke-n : ";cin>>n;

    for (int i =1; i<n; i++){
        fibo_n=fibo_n1+fibo_n2;
        fibo_n2=fibo_n1;
        fibo_n1=fibo_n;
        cout<<fibo_n<<" ";
    }
    cout<<endl;
    cin.get();
    return 0;
}