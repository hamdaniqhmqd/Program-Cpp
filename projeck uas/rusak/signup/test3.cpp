#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct UserData {
    string username;
    string password;
};

class DataHandler {
private:
    const char* fileName;
    UserData users[100]; // Misalnya, array untuk maksimum 100 user
    int totalUsers;

public:
    DataHandler(const char* filename) : fileName(filename), totalUsers(0) {
        // Constructor untuk menginisialisasi nama file dan jumlah pengguna
    }

    bool isUsernameExist(const string& username) {
        for (int i = 0; i < totalUsers; ++i) {
            if (users[i].username == username) {
                return true;
            }
        }
        return false;
    }

    void addUser(const string& username, const string& password) {
        if (totalUsers < 100) {
            if (!isUsernameExist(username)) {
                users[totalUsers].username = username;
                users[totalUsers].password = password;
                totalUsers++;
                cout << "Data berhasil ditambahkan" << endl;
            } else {
                cout << "Username sudah ada. Data tidak ditambahkan." << endl;
            }
        } else {
            cout << "Batas maksimum pengguna tercapai." << endl;
        }
    }

    void showAllUsers() {
        cout << "Daftar Pengguna:" << endl;
        for (int i = 0; i < totalUsers; ++i) {
            cout << "Username: " << users[i].username << ", Password: " << users[i].password << endl;
        }
    }

    void saveDataToFile() {
        ofstream file(fileName);

        if (file.is_open()) {
            for (int i = 0; i < totalUsers; ++i) {
                file << users[i].username << " " << users[i].password << endl;
            }
            file.close();
            cout << "Data berhasil disimpan ke " << fileName << endl;
        } else {
            cout << "Gagal membuka file." << endl;
        }
    }
};

int main() {
    DataHandler handler("user_data.txt");

    char choice = 'y';
    while (tolower(choice) == 'y') {
        string username, password;

        cout << "Masukkan username: ";
        cin >> username;

        if (!handler.isUsernameExist(username)) {
            cout << "Masukkan password: ";
            cin >> password;
            handler.addUser(username, password);
        } else {
            cout << "Username sudah ada. Data tidak ditambahkan." << endl;
        }

        cout << "Tambahkan pengguna lain? (y/n): ";
        cin >> choice;
    }

    handler.showAllUsers(); // Menampilkan semua data pengguna
    handler.saveDataToFile();

    return 0;
}

