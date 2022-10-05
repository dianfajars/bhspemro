#include <iostream>
using namespace std;

void show(int arr[], int size)    //line 4-8 : ini adalah sebuah function yang nanti akan digunakan untuk menampilkan semua data yang ada di dalam array.*/
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int partition(int arr[], int low, int high) // line 10-30 : disini proses sorting terjadi, dimana pertama kita akan memilih pivot di ujung list. 
{                                           // dan membandingkan setiap angka dari sebelah kiri dan kanan, 
    int pivot = arr[high];                  // dimana jika angka lebih kecil dari pivot maka ia akan ditempatkan di sebelah kiri dan jika lebih besar maka akan ditempatkan disebelah kanan,
    int i = (low - 1);                      // serta kita akan mereturn pivot(angka paling kanan sebagai acuan proses selanjutnya)

    for (int j = low; j < high; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) //line 32-40 : disini kita akan membuat function recursiv, 
{                                            // pertama kita akan melakukan proses pivot jika angka masih belum tersoting secara ascending,
    if (low < high)                         //  maka kita akan terus menjalankan functionnya hingga semua angka terurut sempurna.
    {

        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}


int main()
{
    int size;
    cout << "\nmasukan banyaknya data : "; // inputan brp banyak array yg diinput

    cin >> size;

    int arr[size];

    cout << "\nmasukan nilai : ";

    for (int i = 0; i < size; ++i) 
    {
        cout << "\n";
        cin >> arr[i];
    }
    quickSort(arr, 0, size); //menjalankan fungsi quick sort dan menampilkannya menggunakan function yang telah kita buat sebelumnya.
    cout << "Sorted array\n";
    show(arr, size);
    return 0;
}