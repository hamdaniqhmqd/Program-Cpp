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
//		printf(". Selesai Pilihan \n");
		
}

int main() {
	
    vector<Item> items;
    char NamaBarang[20];
//    string NamaBarang;
    double HargaBarang, TotalHarga, total = 0, TotalQty;
    int jumlah, JumlahBarang = 0, pilMenu, pilihLagi, diskon, bayar, totDiskon, totKembali;
    char Tambahan;
    float tot;

	daftarBarang();
    do {
    	printf("Masukan Pilihan : ");
		scanf("%d", &pilMenu);
		printf("Masukan Jumlah : ");
		scanf("%d", &jumlah);
		
		switch(pilMenu){
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
			printf("Pilihan Yang Anda Masukan Tidak Ada Di List Menu");
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
		
system("cls");
    cout<<"DOLOPO"<<setiosflags(ios::center)<<setw(40)<< endl;
    cout<< "#### SHOPING CENTER ####"<<setiosflags(ios::center)<<setw(40)<< endl;
    cout<< "Jl. Adil Makmur" <<setiosflags(ios::center)<<setw(40)<< endl;
    cout<< "DOLOPO" <<setiosflags(ios::center)<<setw(40)<< endl;
    cout<< "=========================================================" << endl;
    cout<< "Nama Barang\tHarga\tJumlah\tTotal" << endl;

    for (int i = 0; i < items.size(); ++i) {
    const Item & item = items[i];
    total +=+ item.Total;
	TotalQty +=+ item.Jumlah;  
    cout << item.Nama << "\t\t" << item.Harga << "\t" << item.Jumlah << "\t" << item.Total << endl;
    
}
	//Menampilkan Keterangan
    cout<<"---------------------------------------------------------"<<endl;
	cout<<"Total Qty	: "<<TotalQty<<endl;
	cout<<"Grand Total	: Rp."<<total<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	if (total>=100000){
		diskon=0.06*total;
	} else if (total>=50000){
		diskon=0.04*total;
	}else if (total>=25000){
		diskon=0.02*total;
	}else {
		diskon=0;
	}
	cout<<"Voucher		: Rp."<<diskon<<endl; //Menampilkan diskon
	totDiskon = total - diskon; // Hasil total Diskon
	cout<<"Total Bayar 	: Rp."<<totDiskon<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Pembayaran	: Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	totKembali = bayar - totDiskon;
	cout<<"Kembali		: Rp."<<totKembali<<endl; // Menampilkan uang kembali

	time_t a=time(0);
	string b =ctime(&a);

	cout<<"Tanggal		: "<<setiosflags(ios::right)<<setw(40)<<b<<endl;

	
    cout << "\t\tTerima kasih atas pembelian Anda !" <<setiosflags(ios::center)<<setw(40)<< endl;
    cout << "\tBarang Yang Sudah Di Beli Tidak Bisa Di Kembalikan !" <<setiosflags(ios::center)<<setw(40)<< endl;


//    cout << "\nTotal Pembayaran               : " << total << endl;
    cout<<"---------------------------------------------------------"<<endl;

	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
    return 0;
}

