#include <iostream>

using namespace std;

void nilaiTerkecilGenapGanjil(int arr[], int n) {
    int terkecilGenap = -1;
    int terkecilGanjil = -1;
    int indexGenap = -1;
    int indexGanjil = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (terkecilGenap == -1 || arr[i] < terkecilGenap) {
                terkecilGenap = arr[i];
                indexGenap = i;
            }
        } else {
            if (terkecilGanjil == -1 || arr[i] < terkecilGanjil) {
                terkecilGanjil = arr[i];
                indexGanjil = i;
            }
        }
    }

    if (terkecilGenap != -1) {
        cout << "Nilai terkecil genap: " << terkecilGenap << ", pada index ke-" << indexGenap << endl;
    } else {
        cout << "Tidak ada bilangan genap" << endl;
    }

    if (terkecilGanjil != -1) {
        cout << "Nilai terkecil ganjil: " << terkecilGanjil << ", pada index ke-" << indexGanjil << endl;
    } else {
        cout << "Tidak ada bilangan ganjil" << endl;
    }
}

int main() {
    int arr[] = {6, 7, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    nilaiTerkecilGenapGanjil(arr, n);

    return 0;
}
