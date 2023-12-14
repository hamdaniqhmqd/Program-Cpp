#include <iostream>
#include <vector>
#include <limits> // untuk menggunakan numeric_limits
using namespace std;

// Definisi kelas Produk
class Produk {
private:
    int idBarang;
    string namaBarang;
    double hargaBarang;
    int jumlahBarang;
    string namaPenjual;

public:
    // Konstruktor
    Produk(int id, const string& nama, double harga, int jumlah, const string& penjual)
        : idBarang(id), namaBarang(nama), hargaBarang(harga), jumlahBarang(jumlah), namaPenjual(penjual) {}

    // Getter untuk mengakses atribut privat
    int getIdBarang() const { return idBarang; }
    string getNamaBarang() const { return namaBarang; }
    double getHargaBarang() const { return hargaBarang; }
    int getJumlahBarang() const { return jumlahBarang; }
    string getNamaPenjual() const { return namaPenjual; }
};

int main() {
    // Membuat vector untuk menyimpan produk
    vector<Produk> dataProduk;

    char tambahLagi = 'y';
    while (tambahLagi == 'y' || tambahLagi == 'Y') {
        int id;
        string nama;
        double harga;
        int jumlah;
        string penjual;

        cout << "Masukkan ID Barang: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Masukkan Nama Barang: ";
        getline(cin, nama);

        cout << "Masukkan Harga Barang: ";
        cin >> harga;

        cout << "Masukkan Jumlah Barang: ";
        cin >> jumlah;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Masukkan Nama Penjual: ";
        getline(cin, penjual);

        // Tambahkan produk baru ke dalam vector
        dataProduk.push_back(Produk(id, nama, harga, jumlah, penjual));

        cout << "Tambahkan data produk lagi? (y/n): ";
        cin >> tambahLagi;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Menampilkan data produk yang disimpan
    cout << "\nData Produk:\n";
    for (const auto& produk : dataProduk) {
        cout << "ID: " << produk.getIdBarang() << endl;
        cout << "Nama: " << produk.getNamaBarang() << endl;
        cout << "Harga: " << produk.getHargaBarang() << endl;
        cout << "Jumlah: " << produk.getJumlahBarang() << endl;
        cout << "Penjual: " << produk.getNamaPenjual() << endl;
        cout << "----------------\n";
    }

    return 0;
}
