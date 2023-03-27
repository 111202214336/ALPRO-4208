#include <iostream>

using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}

int main()
{
    int n;
    cout << "Masukkan bilangan bulat: ";
    cin >> n;
    cout << "Bilangan " << n << " adalah bilangan " << (isOdd(n) ? "ganjil" : "genap") << endl;
    return 0;
}
