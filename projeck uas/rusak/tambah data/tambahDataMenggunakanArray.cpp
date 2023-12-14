#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class DataHandler {
private:
    const char* fileName;

public:
    DataHandler(const char* filename) : fileName(filename) {
        // Constructor untuk menginisialisasi nama file
    }

    void addUserData(const string& username, const string& password) {
        ofstream file(fileName, ios_base::app); // Mode append untuk menambahkan data ke file

        if (file.is_open()) {
            file << username << " " << password << endl;
            file.close();
            cout << "Data berhasil ditambahkan ke " << fileName << endl;
        } else {
            cout << "Gagal membuka file." << endl;
        }
    }
};

int main() {
    DataHandler handler("user_data.txt");

    string username, password;
    cout << "Masukkan username baru: ";
    cin >> username;
    cout << "Masukkan password baru: ";
    cin >> password;

    handler.addUserData(username, password);

    return 0;
}

