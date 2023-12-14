#include <iostream>
#include <stdlib.h>;

using namespace std;

//class Masuk {
//	private:
//    int menu;
//
//public:
//    void tampilan() {
//    	
//    }
//	
//	void bagianMasuk() {
//	    tampilan();
//	}
//};

int main() {
	int menu, masuk, pilihProduk;
	
//	Masuk masuk;
	
	menu:
	cout << "|=================================|" << endl;
    cout << "|		PILIH		  |" << endl;
    cout << "|=================================|" << endl;
    cout << "Menu:" << endl;
    cout << "1. Masuk" << endl;
    cout << "2. Pilih Produk" << endl;
    cout << "3. Checkout" << endl;
    cout << "4. Pengiriman" << endl;
        
    cout << "Masukan pilihan yang sesuai: ";
    cin >> menu;
    system("cls");
    if (menu > 4 || menu == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan sesuai
		do { // jika pilihan tidak sesaui otomatis akan mengulangi
		cout<<("Silahkan Masukan Pilihan Yang Sesuai : "); 
		cin >> menu;
		} while (menu > 4 || menu == 0); 
	}
	switch (menu) {
    	case 1:
            goto masuk;
            break;
        case 2:
            cout << "Pilih Produk" << endl;
            break;
        case 3:
            cout << "Checkout" << endl;
            break;
        case 4:
            cout << "Pengiriman" << endl;
            break;
        default:
            cout << "";
    }

    masuk:
    cout << "|=================================|" << endl;
    cout << "|		PILIH		  |" << endl;
    cout << "|=================================|" << endl;
    cout << "Menu:" << endl;
	cout << "1. Login" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
        
    cout << "Masukan pilihan yang sesuai: ";
    cin >> masuk;
    system("cls");
    if (masuk > 3 || masuk == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan sesuai
		do { // jika pilihan tidak sesaui otomatis akan mengulangi
		cout<<("Silahkan Masukan Pilihan Yang Sesuai : "); 
		cin >> masuk;
		} while (masuk > 3 || masuk == 0); 
	}
	switch (masuk) {
   	    case 1:
        	cout << "Login" << endl;
        	break;
        case 2:
	    	cout << "Sign Up" << endl;
        	break;
    	case 3:
			goto menu;
            break;
        default:
            cout << "";
        }
    
//    goto pilih:
}
