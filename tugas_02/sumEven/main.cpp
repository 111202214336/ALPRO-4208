#include <iostream>

using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}
int sumEven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (isEven(arr[i])) sum += arr[i];

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
    cout << "Jumlah elemen genap dari array adalah " << sumEven(arr, n) << endl;

    return 0;
}
