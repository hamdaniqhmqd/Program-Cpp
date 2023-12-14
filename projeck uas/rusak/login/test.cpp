#include <iostream>
#include <string>

using namespace std;

// Class untuk merepresentasikan user
class User {
private:
    string username;
    string password;

public:
    User(string uname, string pwd) : username(uname), password(pwd) {}

    // Method untuk memeriksa apakah username dan password sesuai
    bool checkCredentials(string uname, string pwd) {
        return (username == uname && password == pwd);
    }
};

int main() {
    // Membuat objek user
    User user("username", "password");

    string inputUsername, inputPassword;

    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    // Memeriksa apakah kredensial yang dimasukkan sesuai
    if (user.checkCredentials(inputUsername, inputPassword)) {
        cout << "Login berhasil! Selamat datang, " << inputUsername << "!" << endl;
    } else {
        cout << "Login gagal! Periksa kembali username dan password Anda." << endl;
    }

    return 0;
}

