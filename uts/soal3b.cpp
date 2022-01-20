#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;

    cout << "Masukkan jumlah baris: "; 
    cin >> n;
     for (i=n ; i>= 1; i--){
        for (k = n-i; k>0; k--) {
            cout <<" ";
        }
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}