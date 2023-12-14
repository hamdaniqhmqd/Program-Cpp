#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("dataUser.txt"); // Membuka berkas 'data.txt'
    
    if (file.is_open()) { // Memastikan berkas berhasil terbuka
        string line;
        while (getline(file, line)) { // Membaca berkas per baris
            cout << line << endl; // Menampilkan setiap baris
        }
        file.close(); // Menutup berkas setelah selesai digunakan
    } else {
        cout << "Gagal membuka berkas." << endl;
    }
    
    return 0;
}

