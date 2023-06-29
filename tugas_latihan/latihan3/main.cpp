#include <iostream>

typedef double real;

struct PersegiPanjang {
    real panjang;
    real lebar;

    real hitungLuas() {
        return panjang * lebar;
    }
};

struct Lingkaran {
    real radius;

    real hitungLuas() {
        return (22.0 / 7.0) * radius * radius;
    }
};

struct Kerucut {
    real radius;
    real tinggi;

    real hitungVolume() {
        return (1.0 / 3.0) * 3.14 * radius * radius * tinggi;
    }
};

struct Bola {
    real radius;

    real hitungVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    real luasPersegiPanjang = pp.hitungLuas();
    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;

    Lingkaran lingkaran;
    lingkaran.radius = 4.0;

    real luasLingkaran = lingkaran.hitungLuas();
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;

    Kerucut kerucut;
    kerucut.radius = 3.0;
    kerucut.tinggi = 6.0;

    real volumeKerucut = kerucut.hitungVolume();
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;

    Bola bola;
    bola.radius = 2.0;

    real volumeBola = bola.hitungVolume();
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
