#include <iostream>
#include <string>

//array statis

struct Mahasiswa {
    std::string NIM;
    std::string Nama;
    std::string Jurusan;
    int TahunLulus;
};

int main() {
    const int jumlahMahasiswa = 4;
    Mahasiswa dataMahasiswa[jumlahMahasiswa];

    dataMahasiswa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    dataMahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    dataMahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    dataMahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    for (int i = 0; i < jumlahMahasiswa; i++) {
        std::cout << "Mahasiswa " << i+1 << std::endl;
        std::cout << "NIM: " << dataMahasiswa[i].NIM << std::endl;
        std::cout << "Nama: " << dataMahasiswa[i].Nama << std::endl;
        std::cout << "Jurusan: " << dataMahasiswa[i].Jurusan << std::endl;
        std::cout << "Tahun Lulus: " << dataMahasiswa[i].TahunLulus << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
