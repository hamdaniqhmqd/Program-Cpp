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
    double Harga, Total;
    int Jumlah;
};

	vector<Item> items;
    char NamaBarang[20], Tambahan, kasir[30], caraBayar[20];
    double HargaBarang, TotalHarga, total = 0, TotalQty;
    int jumlah, JumlahBarang = 0, pilDaf, pilihLagi, diskon, bayar, totDiskon, totKembali, carBa;
    float tot;
    time_t a=time(0);
	string b =ctime(&a);

daftarBarang(){
	menu:
		printf(" MENU \n");
		printf("1. BERAS : 8000 \n");
		printf("2. KECAP ABC : 8000 \n");
		printf("3. SAUS TOMAT ABC : 8000 \n");
		printf("4. SAUS PEDAS ABC : 8000 \n");
		printf("5. MIE SEDAP GORENG : 8000 \n");
		printf("6. MIE SEDAP AYAM BAWANG : 8000 \n");
		printf("7. MIE SEDAP SOTO : 8000 \n");
		printf("8. MIE BURUNG DARA : 8000 \n");
		printf("9. TELUR : 8000 \n");
		printf("10. GULA PASIR : 8000 \n");
		printf("11. GULA MERAH : 8000 \n");
		printf("12. LUWAK WHITE COFFEE : 8000 \n");
		printf("13. KOPI KAPAL API : 8000 \n");
		printf("14. TEH SARIWANGI : 8000 \n");
		printf("15. TEH SOSRO : 8000 \n");
};

pilihBarang() {
	do {
    	pilih:
		printf("Silahkan Masukan Pilihan : ");
		scanf("%d", &pilDaf);
		if (pilDaf > 10 || pilDaf == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan barang
			do { // jika pilihan barang tidak sesaui otomatis akan mengulangi perintah memilih barang
			printf("Silahkan Masukan Pilihan Yang Sesuai : "); 
			scanf("%d", &pilDaf);
			} while (pilDaf > 10 || pilDaf == 0); 
		}
			
		printf("Masukan Jumlah : ");
		scanf("%d", &jumlah);
		switch(pilDaf){
			case 1:{
				strcpy(NamaBarang,"BERAS");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 2:{
				strcpy(NamaBarang,"KECAP");
				HargaBarang = 5000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 3:{
				strcpy(NamaBarang,"SAUS");
				HargaBarang = 7000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 4:{
				strcpy(NamaBarang,"TELUR");
				HargaBarang = 8000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 5:{
				strcpy(NamaBarang,"BERAS");
				HargaBarang = 35000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 6:{
				strcpy(NamaBarang,"BERAS");
				HargaBarang = 3000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 7:{
				strcpy(NamaBarang,"KECAP");
				HargaBarang = 5000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 8:{
				strcpy(NamaBarang,"SAUS");
				HargaBarang = 7000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 9:{
				strcpy(NamaBarang,"TELUR");
				HargaBarang = 8000;
				JumlahBarang = jumlah;
				TotalHarga = JumlahBarang * HargaBarang;
			}break;
			case 10:{
				strcpy(NamaBarang,"BERAS");
				HargaBarang = 35000;
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
		printf("Uang masih anda kurang : Rp."); 
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
	// Banner 
	cout<< "\t\t\tDOLOPO" << endl;
    cout<< "\t\t#### SHOPING CENTER ####" << endl;
    cout<< "\t\t   Jl. Adil Makmur" << endl;
    cout<< "\t\t\tDOLOPO" <<endl;
    cout<< "======================================================" << endl;
    
    // Barang Yang dibeli
    cout<< "Qty\tNama Barang\t\t\tTotal" << endl;
    
    // untuk mengeluarkan semua data yang di inputkan
    for (int i = 0; i < items.size(); ++i) {
    const Item & item = items[i];
    total +=+ item.Total;
	TotalQty +=+ item.Jumlah;

	// Tampilan Judul Tabel Pembelian
    cout<<" "<<item.Jumlah<<"\t"<<item.Nama<<endl;
    cout<<"\t"<<"@ "<<item.Harga<<"\t\t\t\t"<<item.Total<<endl;
}

	//Menampilkan Keterangan
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Total Qty	: "<<TotalQty<<endl;
    cout<<"Grand Total 	: Rp."<<totDiskon<<endl;
    cout<<"Voucher		: Rp."<<diskon<<endl;
    cout<<"Kembali		: Rp."<<totKembali<<endl;
    cout<<"Cara Bayar	: "<<caraBayar<<endl;
	cout<<"Kasir		: "<<kasir<<setiosflags(ios::right)<<setw(30)<<b<<endl; // untuk menampilkan Kasir dan tanggal

    cout << "\t\tTerima kasih atas pembelian Anda !" << endl;
    cout << "\tBarang Yang Sudah Di Beli Tidak Bisa Di Kembalikan !" << endl;
};

int main() {
	
	daftarBarang();
	
    pilihBarang();
    
	system("cls");
	
	prosesStruk();
	
	system("cls");
	
	struk();
	
    return 0;
}