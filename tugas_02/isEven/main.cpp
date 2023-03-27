#include <iostream>

using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

int main()
{
    int n;
    cout << "Masukkan bilangan bulat: ";
    cin >> n;
    cout << "Bilangan " << n << " adalah bilangan " << (isEven(n) ? "genap" : "ganjil") << endl;
    return 0;
}
