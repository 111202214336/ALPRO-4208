#include <iostream>
#include <string>

struct Sepeda {
    std::string Merk;
    std::string Type;
    int Tahun;
    std::string Harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->Merk = "Polygon";
    ptrSepeda->Type = "Sepeda Gunung";
    ptrSepeda->Tahun = 2013;
    ptrSepeda->Harga = "2.000.000";

    std::cout << "Merk: " << ptrSepeda->Merk << std::endl;
    std::cout << "Type: " << ptrSepeda->Type << std::endl;
    std::cout << "Tahun: " << ptrSepeda->Tahun << std::endl;
    std::cout << "Harga: " << ptrSepeda->Harga << std::endl;

    return 0;
}
