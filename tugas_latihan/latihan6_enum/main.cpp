#include <iostream>

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai
};

enum GearKendaraan {
    P,
    R,
    N,
    F
};

enum Nilai {
    A = 90,
    B = 80,
    C = 70,
    D = 60,
    E = 50
};

int main() {
    // Contoh penggunaan enum Cuaca
    Cuaca cuacaSekarang = Hujan;
    if (cuacaSekarang == Hujan) {
        std::cout << "Sedang hujan" << std::endl;
    } else {
        std::cout << "Tidak hujan" << std::endl;
    }

    // Contoh penggunaan enum GearKendaraan
    GearKendaraan gearSekarang = F;
    std::cout << "Kendaraan saat ini berada pada gigi: " << gearSekarang << std::endl;

    // Contoh penggunaan enum Nilai
    int nilaiMahasiswa = 75;
    if (nilaiMahasiswa >= C) {
        std::cout << "Mahasiswa lulus" << std::endl;
    } else {
        std::cout << "Mahasiswa tidak lulus" << std::endl;
    }

    return 0;
}
