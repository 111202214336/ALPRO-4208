#include<iostream>
#include<array>

/* Nama : Almira Zuhrotus Safira
    Nim : A11.2022.14336
*/
using namespace std;

int penjumlahan(int a, int b){
    int hasil = a + b;
    return hasil;
}

int pengurangan(int a, int b){
    int hasil = a - b;
    return hasil;
}

int total_value_element_arr(array <int, 5> arr){
    int hasil = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    return hasil;
}

float rata_rata_element_arr(array <int, 5> arr){
    float hasil = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / arr.size();
    return hasil;
}

int main() {

    // Soal 1 : fungsi penjumlahan
    cout << "penjumlahan 1 + 2 : " << penjumlahan(1, 2) << std::endl;

    // Soal 2 : fungsi pengurangan
    cout << "pengurangan 2 - 1 : " << pengurangan(2, 1) << std::endl;

    // Soal 3 : total value dari element sebuah array
    array <int, 5> arr = {1, 2, 3, 4, 5};
    cout << total_value_element_arr(arr) << std::endl;

    // Soal 4 : mencari rata-rata dari element sebuah array
    cout << rata_rata_element_arr(arr) << std::endl;

    return 0;
}
