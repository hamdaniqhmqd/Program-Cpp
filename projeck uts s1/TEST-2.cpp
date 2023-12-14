#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

struct Item {
    string Nama;
    double Harga;
    int Jumlah, Total;
};

vector<Item> items;
char NamaBarang[20], Tambahan, kasir[30], caraBayar[20];
double HargaBarang, TotalHarga, TotalQty, tanggal, waktu;
int jumlah, JumlahBarang = 0, pilDaf, pilihLagi, diskon, bayar, total, totDiskon, totKembali, carBa;
time_t t = time(NULL);
tm* tPtr = localtime(&t);

// bagian untuk mendekralasikan isi menu dan harganya supaya pemilik toko tidak kesulitan unutk mengatur nama dan harga barangnya
char barang1[20]="BERAS";
double harga1=12000

daftarBarang(){
	cout<< "======================================================" << endl;
	cout<<"\t\t\tMENU \n";
	cout<< "======================================================" << endl;
	cout<<"1. "<<barang1<<"				: "<<harga1<<"/Kg \n";
	cout<<"2. KECAP ABC				: 4000/Botol \n";
	cout<<"3. SAUS TOMAT ABC			: 4000/Botol \n";
	cout<<"4. SAUS PEDAS ABC			: 4000/Botol \n";
	cout<<"5. MIE SEDAP GORENG			: 3000/Bks \n";
	cout<<"6. MIE SEDAP AYAM BAWANG		: 3000/Bks \n";
	cout<<"7. MIE SEDAP SOTO			: 3000/Bks \n";
	cout<<"8. MIE BURUNG DARA			: 3000/Bks \n";
	cout<<"9. TELUR				: 30000/Kg \n";
	cout<<"10. GULA PASIR				: 15000/Kg \n";
	cout<<"11. GULA MERAH				: 12000/Kg \n";
	cout<<"12. LUWAK WHITE COFFEE			: 2000/Bks \n";
	cout<<"13. KOPI KAPAL API			: 1000/Bks \n";
	cout<<"14. TEH SARIWANGI			: 6000/Pack \n";
	cout<<"15. TEH SOSRO				: 5000/Pack \n";
	cout<< "======================================================" << endl;
};

pilihBarang() {
	do {
    	pilih:
		printf("Silahkan Masukan Pilihan : ");
		scanf("%d", &pilDaf);
		if (pilDaf > 15 || pilDaf == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan barang
			do { // jika pilihan barang tidak sesaui otomatis akan mengulangi perintah memilih barang
			printf("Silahkan Masukan Pilihan Yang Sesuai : "); 
			scanf("%d", &pilDaf);
			} while (pilDaf > 15 || pilDaf == 0); 
		}	
		printf("Masukan Jumlah : ");
		scanf("%d", &jumlah);
		switch(pilDaf){
			case 1:{
				strcpy(NamaBarang, case1);
				HargaBarang = 12000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 2:{
				strcpy(NamaBarang,"KECAP ABC");
				HargaBarang = 4000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 3:{
				strcpy(NamaBarang,"SAUS TOMAT ABC");
				HargaBarang = 4000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 4:{
				strcpy(NamaBarang,"SAUS PEDAS ABC");
				HargaBarang = 4000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 5:{
				strcpy(NamaBarang,"MIE SEDAP GORENG");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 6:{
				strcpy(NamaBarang,"MIE SEDAP AYAM BAWANG");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 7:{
				strcpy(NamaBarang,"MIE SEDAP SOTO");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 8:{
				strcpy(NamaBarang,"MIE BURUNG DARA");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 9:{
				strcpy(NamaBarang,"TELUR");
				HargaBarang = 30000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 10:{
				strcpy(NamaBarang,"GULA PASIR");
				HargaBarang = 15000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 11:{
				strcpy(NamaBarang,"GULA MERAH");
				HargaBarang = 12000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 12:{
				strcpy(NamaBarang,"LUWAK WHITE COFFEE");
				HargaBarang = 2000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 13:{
				strcpy(NamaBarang,"KOPI KAPAL API");
				HargaBarang = 1000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 14:{
				strcpy(NamaBarang,"TEH SARIWANGI");
				HargaBarang = 6000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 15:{
				strcpy(NamaBarang,"TEH SOSRO");
				HargaBarang = 5000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			
			default : 
			printf("");  
		}
		
		// Memasukkan 
		Item BarangBaru;
        BarangBaru.Nama = NamaBarang;
        BarangBaru.Harga = HargaBarang;
        BarangBaru.Jumlah = JumlahBarang;
        BarangBaru.Total = TotalHarga;

        items.push_back(BarangBaru);
		
		printf("1 = YA \n");
		printf("2 = TIDAK \n");
		cout<<" Pilih lagi atau tidak : ";
		cin>>pilihLagi;
		} while (pilihLagi == 1);
}
prosesStruk() {
	cout<< "======================================================" << endl;
	printf("\t\t\tPROSES PEMBELIAN \n");
	cout<< "======================================================" << endl;
	cout<< "Qty\tNama Barang\t\t\tTotal" << endl;
	for (int i = 0; i < items.size(); ++i) {
    const Item & item = items[i];
    total +=+ item.Total;
	TotalQty +=+ item.Jumlah;  
    cout<<" "<<item.Jumlah<<"\t"<<item.Nama<<endl;
    cout<<"\t"<<"@ "<<item.Harga<<"\t\t\t\t"<<item.Total<<endl;
}
	//Menampilkan Keterangan
    cout<<"---------------------------------------------------------"<<endl;
	cout<<"Total Qty	: "<<TotalQty<<endl; // total jumlah barang yang dibeli
	cout<<"Grand Total	: Rp."<<total<<endl; // Menampilkan jumlah bayar (belum termasuk diskon)
	if (total>=100000){
		diskon=0.06*total;
	} else if (total>=50000){
		diskon=0.04*total;
	}else if (total>=25000){
		diskon=0.02*total;
	}else {
		diskon=0;
	}
	cout<<"Voucher		: Rp."<<diskon<<endl; // Menampilkan diskon
	totDiskon = total - diskon; // Hasil total Diskon
	cout<<"Grand Total 	: Rp."<<totDiskon<<endl; // Menampilkan total harga yang harus dibayar
	cout<<"Pembayaran	: Rp."; cin>>bayar; // Input dari user untuk jumlah yang dibayar
	if (totDiskon > bayar) { // jika uang pembayaran kurang dari total pembayaran
		do { // maka harus memberikan uang yang sesuai
		printf("Maaf!! uang anda kurang : Rp."); 
		scanf("%d", &bayar);
		} while (totDiskon > bayar); 
	}
	totKembali = bayar - totDiskon; // total pembayaran di kurangi diskon
	cout<<"Kembali		: Rp."<<totKembali<<endl; // Menampilkan uang kembali
	printf("1 = KAS \n");
	printf("2 = KARTU ATM \n");
	cout<<"Pilih Metode Pembayaran : ";
	cin>>carBa;
	if (carBa > 2 || carBa == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan sesuai
		do { // jika pilihan tidak sesaui otomatis akan mengulangi
		printf("Silahkan Masukan Pilihan Yang Sesuai : "); 
		scanf("%d", &carBa);
		} while (carBa > 2 || carBa == 0); 
	}
	switch (carBa) {
		case 1:{
			strcpy(caraBayar,"KAS");
		}break;
		case 2:{
			strcpy(caraBayar,"KARTU ATM");
		}break;		
		default : 
			printf(""); 
	}
	cout<<"Kasir		: ";
	cin>>kasir;
}

struk() {
	// bagian header dari struk
	cout<< "\t\t\tDOLOPO" << endl;
    cout<< "\t\t#### SHOPING CENTER ####" << endl;
    cout<< "\t\t   Jl. Adil Makmur" << endl;
    cout<< "\t\t\tDOLOPO" <<endl;
    cout<< "======================================================" << endl;
    // bagian isi dari struk
    cout<< "Qty\tNama Barang\t\t\tTotal" << endl; // Header dari tabel struk
    for (int i = 0; i < items.size(); ++i) { // untuk mengeluarkan semua data yang di inputkan
    const Item & item = items[i];
    total +=+ item.Total;
	TotalQty +=+ item.Jumlah;
    cout<<" "<<item.Jumlah<<"\t"<<item.Nama<<endl; // untuk mengluarkan inputan jumlah barang dan nama barang
    cout<<"\t"<<"@ "<<item.Harga<<"\t\t\t\t"<<item.Total<<endl;  // unutk mengeluarkan inputan harga dan total
}
	// bagian total biaya pembelian dari tabel struk
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Total Qty	: "; // untuk menampilkan output total jumlah barang yang dibeli
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::left)<<TotalQty<<endl; // untuk menampilkan output total jumlah barang yang dibeli di sebelah kiri
    cout<<"Grand Total 	: "; // untuk menampilkan output total harga yang dibeli
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::right)<<totDiskon<<endl; // untuk menampilkan output total harga yang dibeli di sebelah kanan
    cout<<"Pembayaran	: "; // untuk menampilkan output uang yang dibayarakan
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::right)<<bayar<<endl; // untuk menampilkan output uang yang dibayarakan di sebelah kanan
    cout<<"Voucher		: "; // untuk menampilkan output berapa voucher atau potongan harga yang didapat
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::right)<<diskon<<endl; // untuk menampilkan output berapa voucher atau potongan harga yang didapat di sebelah kanan
    cout<<"Kembali		: "; // untuk menampilkan output uang kembalian
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::right)<<caraBayar<<endl; // untuk menampilkan output uang kembalian di sebelah kanan
    cout<<"Cara Bayar	: "; // untuk menampilkan output cara bayar
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20 
	cout<<setiosflags(ios::left)<<caraBayar<<endl; // untuk menampilkan output cara bayar di sebelah kiri
	cout<<"Kasir		: "; // untuk menampilkan output kasir
	cout<<setw(20); // untuk mengatur lebar kolom menjadi 20
	cout<<setiosflags(ios::left)<<kasir; // untuk menampilkan output kasir di sebelah kiri
	cout<<setiosflags(ios::right); // untuk menmpilkan output tanggal dan waktu di sebelah kanan
	cout<<(tPtr->tm_mday)<<"-"<< (tPtr->tm_mon)+1 <<"-"<< (tPtr->tm_year)+1900; // unutk output tanggal
	cout<<" "<<(tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<endl; // untuk output waktu
	// bagian footer dari struk
    cout<<"------------------------------------------------------"<<endl;
    cout << "\tTerima kasih atas pembelian Anda !" << endl;
    cout << "       Barang Yang Sudah Di Beli Tidak Dapat" << endl;
    cout << "\t\tditukar/dikembalikan" << endl;
};

int main() {
	daftarBarang(); // untuk menampilkan function daftarBarang()
    pilihBarang(); // untuk menampilkan function pilihBarang()
	system("cls"); // untuk menghapus program sebulumnya
	prosesStruk(); // untuk menampilkan function prosesStruk()
	system("cls"); // untuk menghapus program sebulumnya
	struk(); // untuk menampilkan function struk()
    return 0;
}