#include <iostream>

struct PersegiPanjang {
    double panjang;
    double lebar;

    double hitungLuas() {
        return panjang * lebar;
    }
};

struct Lingkaran {
    double radius;

    double hitungLuas() {
        return (22.0 / 7.0) * radius * radius;
    }
};

struct Kerucut {
    double radius;
    double tinggi;

    double hitungVolume() {
        return (1.0 / 3.0) * 3.14159 * radius * radius * tinggi;
    }
};

struct Bola {
    double radius;

    double hitungVolume() {
        return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    }
};

int main() {
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    double luasPersegiPanjang = pp.hitungLuas();
    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;

    Lingkaran lingkaran;
    lingkaran.radius = 4.0;

    double luasLingkaran = lingkaran.hitungLuas();
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;

    Kerucut kerucut;
    kerucut.radius = 3.0;
    kerucut.tinggi = 6.0;

    double volumeKerucut = kerucut.hitungVolume();
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;

    Bola bola;
    bola.radius = 2.0;

    double volumeBola = bola.hitungVolume();
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
