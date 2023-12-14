#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Masuk {
private:
    string username;
    string password;
public:
    Masuk(const string& u, const string& p) : username(u), password(p) {}

    bool authenticate(const string &inputUsername, const string &inputPassword) {
        return (username == inputUsername && password == inputPassword);
    }
    
    void MasukUser() {
    	ifstream file("data_user.txt");
	    if (!file.is_open()) {
	        cout << "Gagal membuka file!" << endl;
	        return;
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
	        Masuk user(fileUsername, filePassword);
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
    }
};

int main() {
	Masuk masuk("","");
	masuk.MasukUser();

    return 0;
}

