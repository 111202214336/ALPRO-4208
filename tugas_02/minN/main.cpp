#include <iostream>

using namespace std;

int minN(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < temp) temp = arr[i];

    return temp;
}

int main()
{
    int n;
    cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Elemen terkecil dari array adalah " << minN(arr, n) << endl;

    return 0;
}
