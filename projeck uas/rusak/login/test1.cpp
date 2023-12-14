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
    ifstream file("data_user.txt");
    if (!file.is_open()) {
        cout << "Gagal membuka file!" << endl;
        return 1;
    }

    string inputUsername, inputPassword;
    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    bool loginSuccess = false;
    string fileUsername, filePassword;

    // Membaca data dari file dan memeriksa autentikasi
    while (file >> fileUsername >> filePassword) {
        User user(fileUsername, filePassword);
        if (user.authenticate(inputUsername, inputPassword)) {
            loginSuccess = true;
            break;
        }
    }

    if (loginSuccess) {
        cout << "Login berhasil! Selamat datang, " << inputUsername << "!" << endl;
    } else {
        cout << "Login gagal! Username atau password salah." << endl;
    }

    file.close();

    return 0;
}

