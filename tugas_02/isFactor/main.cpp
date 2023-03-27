#include <iostream>

using namespace std;

bool isFactor(int n, int m) {
    return m % n == 0;
}

int main()
{
    int n, m;
    cout << "Masukkan bilangan bulat: ";
    cin >> n;
    cout << "Masukkan bilangan bulat: ";
    cin >> m;
    cout << "Bilangan " << n << " adalah faktor dari bilangan " << m << " adalah " << (isFactor(n, m) ? "benar" : "salah") << endl;

    return 0;
}
