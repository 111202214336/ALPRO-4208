#include <iostream>

using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}
int sumOdd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (isOdd(arr[i])) sum += arr[i];

    return sum;
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
    cout << "Jumlah elemen ganjil dari array adalah " << sumOdd(arr, n) << endl;

    return 0;
}
