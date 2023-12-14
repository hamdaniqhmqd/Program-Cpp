#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct UserData {
    string username;
    string password;
};

class DaftarUser {
private:
    const char* namaFile;
    UserData users[100]; // Misalnya, array untuk maksimum 100 user
    int totalUsers;

public:
    DaftarUser(const char* namafile) : namaFile(namafile), totalUsers(0) {
        // Constructor untuk menginisialisasi nama file dan jumlah pengguna
    }

    void addUser(const string& username, const string& password) {
        if (totalUsers < 100) {
            users[totalUsers].username = username;
            users[totalUsers].password = password;
            totalUsers++;
            cout << "Data berhasil ditambahkan" << endl;
        } else {
            cout << "Batas maksimum pengguna tercapai." << endl;
        }
    }

    void saveDataToFile() {
        ofstream file(namaFile);

        if (file.is_open()) {
            for (int i = 0; i < totalUsers; ++i) {
                file << users[i].username << " " << users[i].password << endl;
            }
            file.close();
            cout << "Data berhasil disimpan ke " << namaFile << endl;
        } else {
            cout << "Gagal membuka file." << endl;
        }
    }
};

int main() {
    DaftarUser handler("userData.txt");

    char choice = 'y';
    while (tolower(choice) == 'y') {
        string username, password;

        cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;

        handler.addUser(username, password);

        cout << "Tambahkan pengguna lain? (y/n): ";
        cin >> choice;
    }

    handler.saveDataToFile();

    return 0;
}

