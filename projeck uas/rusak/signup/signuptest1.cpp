#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
public:
    User(const string& u, const string& p) : username(u), password(p) {}

    bool authenticate(const string& inputUsername, const string& inputPassword) const {
        return (username == inputUsername && password == inputPassword);
    }
};

int main() {
    // Membuka file data login
    ifstream file("data_user.txt");
    if (!file.is_open()) {
        cout << "Gagal membuka file!" << endl;
        return 1;
    }

    string fileUsername, filePassword;
    file >> fileUsername >> filePassword; // Membaca data dari file

    // Membuat objek user
    User user(fileUsername, filePassword);

    // Meminta input dari pengguna
    string inputUsername, inputPassword;
    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    // Memeriksa keautentikan
    if (user.authenticate(inputUsername, inputPassword)) {
        cout << "Login berhasil! Selamat datang, " << inputUsername << "!" << endl;
    } else {
        cout << "Login gagal! Username atau password salah." << endl;
    }

    file.close(); // Menutup file setelah digunakan

    return 0;
}

