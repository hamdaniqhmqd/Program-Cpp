#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct Pembeli {
    string Nama_pembeli, Alamat_pembeli, Email_pembeli, Password_pembeli;
    int Id_pembeli, No_rekening;
};

class Data_Produk{
private:
	vector<Pembeli> Data_Pembeli;
	string Nama_Pembeli, Alamat_Pembeli, Email_Pembeli, Password_Pembeli;
    int Id_Pembeli, No_Rekening;
	
public:
	void Buat_Data() {
		char tambah_Lagi, tambah;
		do {
			cout << "|" << setw(40) << setfill('=') << "|" << endl;
		    cout << "|" << "\tBUAT DATA PRODUK\t" << "|" << endl;
		    cout << "|" << setw(40) << setfill('=') << "|" << endl;
		
		    cout << "Masukkan Id Pembeli		: ";
		    cin >> Id_Pembeli;
		    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
		    cout << "Masukkan Nama Pembeli		: ";
		    getline(cin, Nama_Pembeli);
		    cout << "Masukkan Email Pembeli		: ";
		    getline(cin, Email_Pembeli);
		    cout << "Masukkan Password Pembeli	: ";
		    getline(cin, Password_Pembeli);
			cout << "Masukkan Nomor Rekening Pembeli	: ";
		    cin >> No_Rekening;
		    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
		    cout << "Masukkan Alamat Pembeli		: ";
		    getline(cin, Alamat_Pembeli);
		    
		    Pembeli SimpanData;
			SimpanData.Id_pembeli = Id_Pembeli;
			SimpanData.Nama_pembeli = Nama_Pembeli;
			SimpanData.Email_pembeli = Email_Pembeli;
			SimpanData.Password_pembeli = Password_Pembeli;
			SimpanData.No_rekening = No_Rekening;
			SimpanData.Alamat_pembeli = Alamat_Pembeli;
			Data_Pembeli.push_back(SimpanData);
			
			cout<<"Masukan data lagi atau tidak (Y/N): ";
			cin>>tambah_Lagi;
		} while( tambah_Lagi == 'Y' || tambah_Lagi == 'y');
		
		cout << endl;
		
		if (Data_Pembeli.size() > 0) {
			for (int i = 0; i < Data_Pembeli.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
			    const Pembeli &pembeli = Data_Pembeli[i];
			    
			    cout << "Data Pembeli Indek ke-" << i + 1 << endl;
			    cout << "Id Pembeli		: " << pembeli.Id_pembeli << endl;
			    cout << "Nama Pembeli		: " << pembeli.Nama_pembeli << endl;
			    cout << "Email Pembeli		: " << pembeli.Email_pembeli << endl;
			    cout << "Password Pembeli	: " << pembeli.Password_pembeli << endl;
			    cout << "Nomor Rekening Penjual	: " << pembeli.No_rekening << endl;
				cout << "Alamat Pembeli		: " << pembeli.Alamat_pembeli << endl;
				cout << endl;
			}
		} else {
			cout << "Data kosong." << endl;
		}
		
		cout << "Pergi ke tampilan menu (Y/N): ";
		cin >> tambah;
		if (tambah == 'Y' || tambah == 'y') {
			system("cls");
			Menu_Produk();
		}
	}
	
//	void Tampilkan_Data() {
//		cout << "|" << setw(32) << setfill('=') << "|" << endl;
//	    cout << "|" << "\tDAFTAR DATA PRODUK\t" << "|" << endl;
//	    cout << "|" << setw(32) << setfill('=') << "|" << endl;
//		
//		char tampilan;
//		
//		if (Produks.size() > 0) {
//			for (int i = 0; i < Produks.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
//			    const Produk &produk = Produks[i];
//			    
//			    cout << "Produk Indek ke-" << i + 1 << endl;
//			    cout << "Id Produk	: " << produk.Id_produk << endl;
//			    cout << "Nama Produk	: " << produk.Nama << endl;
//			    cout << "Harga Produk	: " << produk.Harga << endl;
//			    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
//			    cout << "Id Penjual	: " << produk.Id_penjual << endl;
//				cout << "Nama Penjual	: " << produk.Penjual << endl;
//				cout << endl;
//			} 
//		} else {
//			cout << "Data Kosong." << endl;
//		}
//		
//		cout << "Pergi ke tampilan menu (Y/N): ";
//		cin >> tampilan;
//		if (tampilan == 'Y' || tampilan == 'y') {
//			system("cls");
//			Menu_Produk();
//		}
//	}
//	
//	void ubahData(int indeks, int Id_Produk, char Nama_Produk[], double Harga_Produk, int Jumlah_Produk, int Id_Penjual, char Nama_Penjual[]) {
//	    if (indeks - 1 >= 0 && indeks - 1 < Produks.size()) {
//	    	// Mengubah nilai dalam struct pada indeks tertentu
//	        Produks[indeks - 1].Id_produk = Id_Produk;
//	        Produks[indeks - 1].Nama = Nama_Produk;
//	        Produks[indeks - 1].Harga = Harga_Produk;
//	        Produks[indeks - 1].Jumlah = Jumlah_Produk;
//	        Produks[indeks - 1].Id_penjual = Id_Penjual;
//	        Produks[indeks - 1].Penjual = Nama_Penjual;
//	    }
//	}
//	
//	void Ubah_Data() {
//		char ubah, ubah_Lagi;
//		int indeks;
//		
//		cout << "|" << setw(40) << setfill('=') << "|" << endl;
//	    cout << "|" << "\t\tUBAH DATA\t\t" << "|" << endl;
//	    cout << "|" << setw(40) << setfill('=') << "|" << endl;
//		
//		if (Produks.size() > 0) {
//			cout << "Data produk sebelum diubah: " << endl;
//			if (Produks.size() > 0) {
//				for (int i = 0; i < Produks.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
//				    const Produk &produk = Produks[i];
//				    
//				    cout << "Produk Indek ke-" << i + 1 << endl;
//				    cout << "Id Produk	: " << produk.Id_produk << endl;
//				    cout << "Nama Produk	: " << produk.Nama << endl;
//				    cout << "Harga Produk	: " << produk.Harga << endl;
//				    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
//				    cout << "Id Penjual	: " << produk.Id_penjual << endl;
//					cout << "Nama Penjual	: " << produk.Penjual << endl;
//					cout << endl;
//				} 
//			} else {
//				cout << "Data Kosong." << endl;
//			}
//			
//			do {
//				cout << "Masukkan indeks yang ingin diubah (1-" << Produks.size() << "): ";
//			    cin >> indeks;
//			    if (Produks.size() > indeks || Produks.size() <= 0) {
//				    do {
//				    	cout << "Indeks tidak di temukan." << endl;
//				    	cout << "Masukkan indeks yang ingin diubah (1-" << Produks.size() << "): ";
//				    	cin >> indeks;
//				    } while(Produks.size() < indeks || Produks.size() <= 0);
//			    } 
//			
//				cout << "Id Produk 	: ";
//				cin >> Id_Produk;
//			    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
//			    cout << "Nama Produk	: ";
//				cin.getline(Nama_Produk, 100);
//			    cout << "Harga Produk	: ";
//			    cin >> Harga_Produk;
//				cout << "Jumlah Produk	: ";
//			    cin >> Jumlah_Produk;
//				cout << "Id Penjual 	: ";
//				cin >> Id_Penjual;
//			    cin.ignore(); // Mengabaikan karakter newline di dalam buffer
//			    cout << "Nama Penjual	: ";
//				cin.getline(Nama_Penjual, 100);
//			
//			    ubahData(indeks, Id_Produk, Nama_Produk, Harga_Produk, Jumlah_Produk, Id_Penjual, Nama_Penjual); // Memanggil fungsi untuk mengubah nilai
//				
//		    	cout<<"Ubah data lagi atau tidak (Y/N): ";
//				cin>>ubah_Lagi;
//			} while(ubah_Lagi == 'Y' || ubah_Lagi == 'y');
//			
//			cout << "Data produk setelah diubah: " << endl;
//		    if (Produks.size() > 0) {
//				for (int i = 0; i < Produks.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
//				    const Produk &produk = Produks[i];
//				    
//				    cout << "Produk Indek ke-" << i + 1 << endl;
//				    cout << "Id Produk	: " << produk.Id_produk << endl;
//				    cout << "Nama Produk	: " << produk.Nama << endl;
//				    cout << "Harga Produk	: " << produk.Harga << endl;
//				    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
//				    cout << "Id Penjual	: " << produk.Id_penjual << endl;
//					cout << "Nama Penjual	: " << produk.Penjual << endl;
//					cout << endl;
//				} 
//			} else {
//				cout << "Data Kosong." << endl;
//			}
//		} else {
//			cout << "Data Kosong." << endl;
//		}
//	      
//	    cout << "Pergi ke tampilan menu (Y/N): ";
//		cin >> ubah;
//		if (ubah == 'Y' || ubah == 'y') {
//			system("cls");
//			Menu_Produk();
//		}  
//	}
//	
//	void Hapus_Data() {
//		int posisi;
//		char hapus, hapus_Lagi;
//		
//		cout << "|" << setw(40) << setfill('=') << "|" << endl;
//	    cout << "|" << "\t\tHAPUS DATA\t\t" << "|" << endl;
//	    cout << "|" << setw(40) << setfill('=') << "|" << endl;
//		
//		if (Produks.size() > 0) {
//			cout << "Data produk sebelum dihapus:" << endl;
//			if (Produks.size() > 0) {
//				for (int i = 0; i < Produks.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
//				    const Produk &produk = Produks[i];
//				    
//				    cout << "Produk Indek ke-" << i + 1 << endl;
//				    cout << "Id Produk	: " << produk.Id_produk << endl;
//				    cout << "Nama Produk	: " << produk.Nama << endl;
//				    cout << "Harga Produk	: " << produk.Harga << endl;
//				    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
//				    cout << "Id Penjual	: " << produk.Id_penjual << endl;
//					cout << "Nama Penjual	: " << produk.Penjual << endl;
//					cout << endl;
//				} 
//			} else {
//				cout << "Data Kosong." << endl;
//			}
//			
//			if (Produks.size() > 0) {
//		    	do {
//					cout << "Masukkan indeks yang ingin dihapus (1-" << Produks.size() << "): ";
//				    cin >> posisi;
//				    if (Produks.size() > posisi || Produks.size() <= 0) {
//					    do {
//					    	cout << "Indeks tidak di temukan." << endl;
//					    	cout << "Masukkan indeks yang ingin dihapus (1-" << Produks.size() << "): ";
//					    	cin >> posisi;
//					    } while(Produks.size() < posisi || Produks.size() <= 0);
//				    }
//				    
//				    if (posisi - 1 >= 0 && posisi - 1 < Produks.size()) {
//			        	Produks.erase(Produks.begin() + posisi - 1);
//			    	}
//					
//				} while(hapus_Lagi == 'Y' || hapus_Lagi == 'y');
//		    		
//		    	cout<<"Hapus data lagi atau tidak (Y/N): ";
//				cin>>hapus_Lagi;
//		   	}
//			
//		    cout << "Data produk setelah dihapus:" << endl;
//			if (Produks.size() > 0) {
//				for (int i = 0; i < Produks.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
//				    const Produk &produk = Produks[i];
//				    
//				    cout << "Produk Indek ke-" << i + 1 << endl;
//				    cout << "Id Produk	: " << produk.Id_produk << endl;
//				    cout << "Nama Produk	: " << produk.Nama << endl;
//				    cout << "Harga Produk	: " << produk.Harga << endl;
//				    cout << "Jumlah Produk	: " << produk.Jumlah << endl;
//				    cout << "Id Penjual	: " << produk.Id_penjual << endl;
//					cout << "Nama Penjual	: " << produk.Penjual << endl;
//					cout << endl;
//				} 
//			} else {
//				cout << "Data Kosong." << endl;
//			}
//		} else {
//			cout << "Data Kosong." << endl;
//		}
//		
//		cout << "Pergi ke tampilan menu (Y/N): ";
//		cin >> hapus;
//		if (hapus == 'Y' || hapus == 'y') {
//			system("cls");
//			Menu_Produk();
//		}
//	}
	
	void Menu_Produk() {
		int pilih_menu;
		
		cout << "|" << setw(40) << setfill('=') << "|" << endl;
	    cout << "|" << "\t\tMENU PRODUK\t\t" << "|" << endl;
	    cout << "|" << setw(40) << setfill('=') << "|" << endl;
	    cout << "1. Buat Data Produk" << endl;
	    cout << "2. Tampilkan Data Produk" << endl;
	    cout << "3. Ubah Data Produk" << endl;
	    cout << "4. Hapus Data Produk" << endl;
	    cout << "5. Keluar" << endl;
	
		cout << "Masukan pilihan yang sesuai: ";
		cin >> pilih_menu;
	    if (pilih_menu > 5 || pilih_menu == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan sesuai
			do { // jika pilihan tidak sesaui otomatis akan mengulangi
			cout<<("Silahkan Masukan Pilihan Yang Sesuai : "); 
			cin >> pilih_menu;
			} while (pilih_menu > 5 || pilih_menu == 0); 
		}
		
		system("cls");
		
		switch (pilih_menu) {
	    	case 1:
	//          cout << "Buat" << endl;
	            Buat_Data();
	            break;
	        case 2:
	//          cout << "Tampilkan" << endl;
//				Tampilkan_Data();
	            break;
	        case 3:
	//          cout << "Ubah" << endl;
//				Ubah_Data();
	            break;
	        case 4:
	//          cout << "Hapus" << endl;
//				Hapus_Data();
	            break;
	        case 5:
	//        	cout << "Selesai" << endl;
				system("cls");
	        	break;
	        default:
	            cout << "";
	    }
	}
};

int main() {
	Data_Produk produk;
	
	produk.Menu_Produk();
}
