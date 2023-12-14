#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class DaftarUser {
private:
	struct UserData {
	    string username;
	    string password;
	};
	
    const char* namaFile;
    UserData User[100]; // Misalnya, array untuk maksimum 100 user
    int totalUsers;

public:
    DaftarUser(const char* namafile) : namaFile(namafile), totalUsers(0) {
        // Constructor untuk menginisialisasi nama file dan jumlah pengguna
    }
    
    DaftarUser(string usr, string pwd) : username(usr), password(pwd) {}
    
    bool checkCredentials(string usr, string pwd) {
        return (username == usr && password == pwd);
    }

    void buatUser() {
        DaftarUser daftar("userData.txt");

		User user("username", "password");

        char choice = 'y';
        while (tolower(choice) == 'y') {
            string username, password;

            cout << "Masukkan username: ";
            cin >> username;
            cout << "Masukkan password: ";
            cin >> password;
            
            // Memeriksa apakah kredensial yang dimasukkan sesuai
		    if (user.checkCredentials(username, password)) {
		        cout << "Login berhasil! Selamat datang, " << username << "!" << endl;
		    } else {
		        cout << "Login gagal! Periksa kembali username dan password Anda." << endl;
		    }

            daftar.tambahUser(username, password);

            cout << "Tambahkan pengguna lain? (y/n): ";
            cin >> choice;
        }

        daftar.simpanDataUser();
    }
    
    void tambahUser(const string& username, const string& password) {
        if (totalUsers < 100) {
            users[totalUsers].username = username;
            users[totalUsers].password = password;
            totalUsers++;
            cout << "Data berhasil ditambahkan" << endl;
        } else {
            cout << "Batas maksimum pengguna tercapai." << endl;
        }
    }

    void simpanDataUser() {
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
    DaftarUser daftar("userData.txt");

    daftar.buatUser();

    return 0;
}

