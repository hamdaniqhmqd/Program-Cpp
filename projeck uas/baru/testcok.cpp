#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Data_Produk{
	private:
	struct data_Produk {
	    string Nama, Keterangan;
	    double Harga;
	    int Id_produk, Stok;
	};
	vector<data_Produk> Produks; // Mendeklarasikan vektor dari struct Data
	
	public:
		
	void Tampilkan_Produk() {
		int Id_Produk[] = {1, 2, 3, 4, 5};
		string Nama_Produk[] = {"satu", "dua", "tiga", "empat", "lima"};
		double Harga_Produk[] = {1.1, 2.2, 3.3, 4.4, 5.5};
		int Jumlah_Produk[] = {1, 2, 3, 4, 5};
		string Keterangan_Produk[] = {"satu", "dua", "tiga", "empat", "lima"};
		
		// Misalnya, menambahkan 3 elemen ke dalam vektor
	    for (int i = 0; i < 5; ++i) {
	    	data_Produk SimpanData;
			SimpanData.Id_produk = Id_Produk[i];
			SimpanData.Nama = Nama_Produk[i];
			SimpanData.Harga = Harga_Produk[i];
			SimpanData.Stok = Jumlah_Produk[i];
			SimpanData.Keterangan = Keterangan_Produk[i];
			
			Produks.push_back(SimpanData);
	    }
		
	    // Menampilkan data
	    cout << "Menampilkan Data Produk : " << endl;
	    for (int i = 0; i < Produks.size(); ++i) {
	    	const data_Produk &produk = Produks[i];
	        
	        cout << "Produk Indek ke-" << i + 1 << endl;
		    cout << "Id Produk		: " << produk.Id_produk << endl;
		    cout << "Nama Produk		: " << produk.Nama << endl;
		    cout << "Harga Produk		: " << produk.Harga << endl;
		    cout << "Jumlah Produk		: " << produk.Stok << endl;
		    cout << "Keterangan Produk	: " << produk.Keterangan << endl;
			cout << endl;
	    }
	}
	
	void Pilih_Produk() {
		string inputNamaProduk;
	    cout << "Masukkan Nama Produk: ";
	    cin >> inputNamaProduk;
	    
	    bool found = false;
	    for (size_t i = 0; i < Produks.size(); ++i) {
	        if (Produks[i].Nama == inputNamaProduk) {
	            found = true;
	            cout << "Id Produk		: " << Produks[i].Id_produk << endl;
			    cout << "Nama Produk		: " << Produks[i].Nama << endl;
			    cout << "Harga Produk		: " << Produks[i].Harga << endl;
			    cout << "Jumlah Produk		: " << Produks[i].Stok << endl;
			    cout << "Keterangan Produk	: " << Produks[i].Keterangan << endl;
	            cout << endl;
	        }
	    }
	
	    if (!found) {
	        cout << "Produk tidak ditemukan." << endl;
	    }
	}
};

int main() {
	Data_Produk p;
	p.Tampilkan_Produk();
	p.Pilih_Produk();

    return 0;
}

