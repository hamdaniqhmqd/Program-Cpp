#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class Data_Produk{
private:
	struct Produk {
		string Nama, Penjual;
	    double Harga;
	    int Id_penjual, Id_produk, Jumlah;
	};
	
	vector<Produk> Produks;
	char Nama_Produk[100], Nama_Penjual[100];
	double Harga_Produk;
	int Id_Produk, Id_Penjual, Jumlah_Produk;
	
public:
	void Buat_Data() {		
		char tambah_Lagi, tambah;
		do {
			cout << "|" << setw(40) << setfill('=') << "|" << endl;
		    cout << "|" << "\tBUAT DATA PRODUK\t" << "|" << endl;
		    cout << "|" << setw(40) << setfill('=') << "|" << endl;
		    cout << "Id Produk 	: "; cin >> Id_Produk;
		    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
		    cout << "Nama Produk	: "; cin.getline(Nama_Produk, 100);
		    cout << "Harga Produk	: "; cin >> Harga_Produk;
		    cout << "Jumlah Produk	: "; cin >> Jumlah_Produk;
			cout << "Id Penjual 	: "; cin >> Id_Penjual;
		    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
		    cout << "Nama Penjual	: "; cin.getline(Nama_Penjual, 100);
		    
		    Produk SimpanData;
			SimpanData.Id_produk = Id_Produk;
			SimpanData.Nama = Nama_Produk;
			SimpanData.Harga = Harga_Produk;
			SimpanData.Jumlah = Jumlah_Produk;
			SimpanData.Id_penjual = Id_Penjual;
			SimpanData.Penjual = Nama_Penjual;
			Produks.push_back(SimpanData);
			
			cout<<"Masukan data lagi atau tidak (Y/N): ";
			cin>>tambah_Lagi;
			if (tambah_Lagi == 'N' || tambah_Lagi == 'n') {
				system("cls");
			}
		} while( tambah_Lagi == 'Y' || tambah_Lagi == 'y');
		
		if (Produks.size() > 0) {
			for (int i = 0; i < Produks.size(); i++) { // untuk mengeluarkan semua data yang di inputkan
			    const Produk &produk = Produks[i];
			    
			    cout << "Produk Indek ke-" << i + 1 << endl;
			    cout << "Id Produk	: " << produk.Id_produk << endl;
			    cout << "Nama Produk	: " << produk.Nama << endl;
			    cout << "Harga Produk	: " << produk.Harga << endl;
			    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
			    cout << "Id Penjual	: " << produk.Id_penjual << endl;
				cout << "Nama Penjual	: " << produk.Penjual << endl;
				cout << endl;
			}
		} else {
			cout << "Data kosong." << endl;
		}
	}
};

int main() {
	Data_Produk produk;
	
	produk.Buat_Data();
}
