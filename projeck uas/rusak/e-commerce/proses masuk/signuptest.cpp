#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Daftar {
private:
    string username;
    string password;

public:
    Daftar(string usr, string pwd) : username(usr), password(pwd) {}

    bool validasi(const string &username, const string &password) {
        return (username == username && password == password);
    }

    void buatUser() {
        string username, password;
        bool loginSuccess = true;
		string fileUsername, filePassword;
        
        ifstream file("data_user.txt");
	    if (!file.is_open()) {}
        
        cout << "Masukkan username: "; cin >> username;
	    cout << "Masukkan password: "; cin >> password;
	    
        do {
        	cout << "\nData sudah ada, masukkan data yang sesuai!" << endl;
        	cout << "Masukkan username: "; cin >> username;
	    	cout << "Masukkan password: "; cin >> password;
		
		    // Membaca data dari file dan memeriksa autentikasi
		    while (file >> fileUsername >> filePassword) {
		        Daftar user(fileUsername, filePassword);
		        if (user.validasi(username, password)) {
		            loginSuccess = false;
		            break;
		        }
		    }
        } while (loginSuccess);

        file.close();
        
        Daftar newUser(username, password);

        if (newUser.simpanDataUser()) {
            cout << "Daftar berhasil! Selamat datang, " << username << endl;
        } else {
            cout << "Gagal menyimpan data pengguna." << endl;
        }
    }

    bool simpanDataUser() {
        ofstream file("data_user.txt");

        if (file.is_open()) {
            file << username << " " << password << endl;
            file.close();
            cout << "Data berhasil disimpan ke dataUser.txt" << endl;
            return true;
        } else {
            cout << "Gagal membuka file!" << endl;
            return false;
        }
    }
};

int main() {
    
    Daftar daftarBaru("", "");
    daftarBaru.buatUser();

    return 0;
}

