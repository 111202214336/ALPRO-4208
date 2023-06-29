#include <iostream>
#include <string>

struct Mahasiswa {
    std::string NIM;
    std::string Nama;
    std::string Jurusan;
    int TahunLulus;
};

int main() {
    int jumlahMahasiswa;
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> jumlahMahasiswa;

    Mahasiswa* dataMahasiswa = new Mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        std::cout << "Data Mahasiswa " << i+1 << std::endl;
        std::cout << "NIM: ";
        std::cin >> dataMahasiswa[i].NIM;
        std::cout << "Nama: ";
        std::cin >> dataMahasiswa[i].Nama;
        std::cout << "Jurusan: ";
        std::cin >> dataMahasiswa[i].Jurusan;
        std::cout << "Tahun Lulus: ";
        std::cin >> dataMahasiswa[i].TahunLulus;
        std::cout << std::endl;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        std::cout << "Mahasiswa " << i+1 << std::endl;
        std::cout << "NIM: " << dataMahasiswa[i].NIM << std::endl;
        std::cout << "Nama: " << dataMahasiswa[i].Nama << std::endl;
        std::cout << "Jurusan: " << dataMahasiswa[i].Jurusan << std::endl;
        std::cout << "Tahun Lulus: " << dataMahasiswa[i].TahunLulus << std::endl;
        std::cout << std::endl;
    }

    delete[] dataMahasiswa;

    return 0;
}
