#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Masukkan jumlah baris: "; 
    cin >> n;
    for (i=n ; i>=0; i--)
    {
        cout << " ";
        for (j=1 ; j<=i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}