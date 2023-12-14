#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
using namespace std;

struct Item { // membuat struktur yang bernama item serta memebuat tipe data dan variabelnya
    string Nama;
    double Harga;
    int Jumlah, Total;
};

//bagian untuk mendeklarasikan tipe data berserta variabelnya
vector<Item> items;
char NamaBarang[20], Tambahan, kasir[5], caraBayar[20], harga;
double HargaBarang, TotalHarga;
int jumlah, JumlahBarang = 0, pilDaf, pilihLagi, carBa, tanggal, waktu, pilKas, TotalQty, bayar, diskon, total, totDiskon, totKembali;
time_t t = time(NULL);
tm* tPtr = localtime(&t);

// bagian untuk mendekralasikan isi menu dan harganya supaya pemilik toko tidak kesulitan untuk mengatur nama, satuan dan harga barangnya
char barang1[20]="BERAS", satuan1[20]="/Kg"; // membuat tipe data char dan variabel barang untuk nama barang, variabel satuang untuk satuan barang
double harga1=12000; // // membuat tipe data double dan variabel harga untuk harga barang
char barang2[20]="KECAP ABC", satuan2[20]="/Botol";
double harga2=4000;
char barang3[20]="SAUS TOMAT ABC", satuan3[20]="/Botol";
double harga3=4000;
char barang4[20]="SAUS PEDAS ABC", satuan4[20]="/Botol"; 
double harga4=4000;
char barang5[20]="MIE SEDAP GORENG", satuan5[20]="/Bungkus";
double harga5=3000;
char barang6[30]="MIE SEDAP AYAM BAWANG", satuan6[20]="/Bungkus";
double harga6=3000;
char barang7[20]="MIE SEDAP SOTO", satuan7[20]="/Bungkus";
double harga7=3000;
char barang8[20]="MIE BURUNG DARA", satuan8[20]="/Bungkus";
double harga8=3000;
char barang9[20]="TELUR", satuan9[20]="/Kg";
double harga9=30000;
char barang10[20]="GULA PASIR", satuan10[20]="/Kg";
double harga10=15000;
char barang11[20]="GULA MERAH", satuan11[20]="/Kg";
double harga11=12000;
char barang12[20]="LUWAK WHITE COFFEE", satuan12[20]="/Bungkus";
double harga12=2000;
char barang13[20]="KOPI KAPAL API", satuan13[20]="/Bungkus";
double harga13=1000;
char barang14[20]="TEH SARIWANGI", satuan14[20]="/Pack";
double harga14=6000;
char barang15[20]="TEH SOSRO", satuan15[20]="/Pack";
double harga15=5000;

daftarBarang(){ // membuat function pilihBarang() yang meliputi daftar barang yang akan d tampilkan
	cout<< "======================================================" << endl;
	cout<<"\t\t\tMENU \n";
	cout<< "======================================================" << endl;
	cout<<"1. "<<barang1<<"				: "<<harga1<<satuan1<<endl;
	cout<<"2. "<<barang2<<"				: "<<harga2<<satuan2<<endl;
	cout<<"3. "<<barang3<<"			: "<<harga3<<satuan3<<endl;
	cout<<"4. "<<barang4<<"			: "<<harga4<<satuan4<<endl;
	cout<<"5. "<<barang5<<"			: "<<harga5<<satuan5<<endl;
	cout<<"6. "<<barang6<<"		: "<<harga6<<satuan6<<endl;
	cout<<"7. "<<barang7<<"			: "<<harga7<<satuan7<<endl;
	cout<<"8. "<<barang8<<"			: "<<harga8<<satuan8<<endl;
	cout<<"9. "<<barang9<<"				: "<<harga9<<satuan9<<endl;
	cout<<"10. "<<barang10<<"				: "<<harga10<<satuan10<<endl;
	cout<<"11. "<<barang11<<"				: "<<harga11<<satuan11<<endl;
	cout<<"12. "<<barang12<<"			: "<<harga12<<satuan12<<endl;
	cout<<"13. "<<barang13<<"			: "<<harga13<<satuan13<<endl;
	cout<<"14. "<<barang14<<"			: "<<harga14<<satuan14<<endl;
	cout<<"15. "<<barang15<<"				: "<<harga15<<satuan15<<endl;
	cout<< "======================================================" << endl;
};

pilihBarang() { // membuat function pilihBarang() yang meliputi pemilihan, memasukan data barang
	do {
		cout<<"Silahkan Masukan Pilihan : "; cin>>pilDaf; // Input dari user untuk memasukan pilihan barang dari daftar barang
		if (pilDaf > 15 || pilDaf == 0) { // untuk mengulangi kondisi yang sudah ditentukan 
			do { // jika pilihan tidak sesaui otomatis akan mengulangi sampai perintah tersebut sesuai
			cout<<"Silahkan Masukan Pilihan Yang Sesuai : "; cin>>pilDaf; // Input dari user untuk memasukan pilihan barang dari daftar barang
			} while (pilDaf > 15 || pilDaf == 0);  // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah
		}	
		cout<<"Masukan Jumlah : "; cin>>jumlah; // Input dari user untuk jumlah barang yang akan di beli
		switch(pilDaf){ // untuk memilih salah satu dari banyak case yang akan tampilkan
			case 1:{ 
				strcpy(NamaBarang, barang1); // untuk menyalin nilai string dari variabel barang1 ke variabel NamaBarang
				HargaBarang = harga1; // membuat variabel HargaBarang yang berisi variabel harga1
				JumlahBarang = jumlah; // membuat variabel JumlahBarang yang berisi variabel jumlah
				TotalHarga = JumlahBarang * HargaBarang; // membuat variabel TotalHarga yang berisi penjumlahan dari JumlahBarang dan HargaBarang
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
		}
		Item BarangBaru; // membuat stuct Item dengan nama variabel BarangBaru
        BarangBaru.Nama = NamaBarang; // untuk memasukkan nilai NamaBarang ke kata kunci Nama
        BarangBaru.Harga = HargaBarang; // untuk memasukkan nilai HargaBarang ke kata kunci Harga
        BarangBaru.Jumlah = JumlahBarang; // untuk memasukkan nilai JumlahBarang ke kata kunci Jumlah
        BarangBaru.Total = TotalHarga; // untuk memasukkan nilai TotalHarga ke kata kunci Total
        items.push_back(BarangBaru); // untuk memasukkan setiap kata kunci dan nilai dari variabel BarangBaru ke struct items
		printf("1 = YA \n");
		printf("2 = TIDAK \n");
		cout<<"Pilih lagi atau tidak : "; cin>>pilihLagi;  // Input dari user apakah ingin memilih barang lagi atau tidak
		if (pilihLagi > 2 || pilihLagi == 0) { // untuk mengulangi kondisi yang sudah ditentukan
			do { // jika pilihan tidak sesaui otomatis akan mengulangi
			cout<<"Silahkan Masukan Pilihan Yang Sesuai : "; cin>>pilihLagi;  // Input dari user untuk memasukkan pilihan yang sesuai!!!
			} while (pilihLagi > 2 || pilihLagi == 0); // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah
		}
	} while (pilihLagi == 1); // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah
}
prosesStruk() { // membuat function prosesStruk() yang meliputi proses diskon, nominal pembayaran,metode pembayaran dan pemilihan kasir
	cout<< "======================================================" << endl;
	printf("\t\t\tPROSES PEMBELIAN \n");
	cout<< "======================================================" << endl;
	cout<< "Qty\tNama Barang\t\t\tTotal" << endl; // Header dari tabel struk
	for (int i = 0; i < items.size(); ++i) { // untuk melakukan perulangan pada array item, untuk mengeluarkan semua data yang di inputkan
    const Item & item = items[i]; // 
    total +=+ item.Total; // untuk menjumlah total harga di setiap barang yang dibeli
	TotalQty +=+ item.Jumlah; // untuk menjumlah total jumlah barang di setiap barang yang dibeli
    cout<<" "<<item.Jumlah; // untuk mengluarkan inputan jumlah barang
	cout<<"\t"<<item.Nama<<endl; // untuk mengluarkan inputan nama barang
    cout<<"\t"<<"@ "<<item.Harga; // untuk mengeluarkan inputan harga
	cout<<"\t\t\t\t"<<item.Total<<endl; // untuk mengeluarkan inputan total
}
	//Menampilkan Proses dari Pembay
    cout<<"---------------------------------------------------------"<<endl;
	cout<<"Total Qty	: "<<TotalQty<<endl; // untuk menampilkantotal jumlah barang yang dibeli
	cout<<"Grand Total	: Rp."<<total<<endl; // untuk menampilkan jumlah bayar (belum termasuk diskon)
	if (total>=100000){ // untuk menentukan kondisi yang sudah ditentukan
		diskon=0.06*total; // membuat Buat variabel bernama diskon untuk hasil dari total pembayaran (belum termasuk diskon) di kali besaran diskon yang didapat
	} else if (total>=50000){ // untuk menentukan kondisi baru yang akan diuji, jika kondisi pertama salah
		diskon=0.04*total; // membuat Buat variabel bernama diskon untuk hasil dari total pembayaran (belum termasuk diskon) di kali besaran diskon yang didapat
	}else if (total>=25000){ // untuk menentukan kondisi baru yang akan diuji, jika kondisi pertama salah
		diskon=0.02*total; // membuat Buat variabel bernama diskon untuk hasil dari total pembayaran (belum termasuk diskon) di kali besaran diskon yang didapat
	}else { // untuk menentukan blok kode yang akan dieksekusi, jika kondisi yang sebelumnya salah
		diskon=0; // membuat Buat variabel bernama diskon untuk hasil besaran diskon yang didapat
	}
	cout<<"Voucher		: Rp."<<diskon<<endl; // Menampilkan hasil diskon atau vouchr yang didapatkan
	totDiskon = total - diskon; // membuat Buat variabel bernama totDiskon untuk hasil dari total pembayaran (belum termasuk diskon) di kurangi diskon
	cout<<"Total		: Rp."<<totDiskon<<endl; // Menampilkan total harga yang harus dibayar
	cout<<"Pembayaran	: Rp."; cin>>bayar; // Input dari user untuk jumlah yang dibayar
	if (totDiskon > bayar) { // untuk menentukan kondisi yang sudah ditentukan
		do { // jika pilihan tidak sesaui otomatis akan mengulangi sampai perintah tersebut sesuai
		cout<<"Maaf!! uang anda kurang : Rp."; cin>>bayar;  // Input dari user untuk memasukkan pilihan yang sesuai!!!
		} while (totDiskon > bayar); // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah.
	}
	totKembali = bayar - totDiskon; // membuat Buat variabel bernama totKembali untuk hasil dari total pembayaran di kurangi total diskon
	cout<<"Kembali		: Rp."<<totKembali<<endl; // Menampilkan uang kembalian dari deklarasi totKembali
	printf("1 = KAS \n");
	printf("2 = KARTU ATM \n");
	cout<<"Pilih Metode Pembayaran : "; cin>>carBa; // untuk memasukkan data 1 atau 2 ke deklarasi carBa
	if (carBa > 2 || carBa == 0) { // untuk menentukan kondisi yang sudah ditentukan
		do { // jika pilihan tidak sesaui otomatis akan mengulangi sampai perintah tersebut sesuai
		cout<<"Silahkan Masukan Pilihan Yang Sesuai : "; cin>>carBa; // Input dari user untuk memasukkan pilihan yang sesuai!!!
		} while (carBa > 2 || carBa == 0); // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah.
	}
	switch (carBa) { // untuk memilih salah satu dari banyak blok kode yang akan dieksekusi.
		case 1:{ // jika memilih 1 maka akan menampilkan output KAS
			strcpy(caraBayar,"KAS");
		}break;
		case 2:{ // jika memilih 1 maka akan menampilkan output KARTU ATM
			strcpy(caraBayar,"KARTU ATM");
		}break;	
	}
	printf("1 = AHMAD \n");
	printf("2 = KARIM \n");
	cout<<"Kasir		: "; cin>>pilKas; // untuk memasukkan data 1 atau 2 ke deklarasi pilKas
	if (pilKas > 2 || pilKas == 0) { // digunakan untuk mengulangi perintah memasukkan pilihan yang sesuai
		do { // jika pilihan tidak sesaui otomatis akan mengulangi sampai perintah tersebut sesuai
		cout<<"Silahkan Masukan Pilihan Yang Sesuai : "; cin>>pilKas; // Input dari user untuk memasukkan pilihan yang sesuai!!!
		} while (pilKas > 2 || pilKas == 0); // untuk mengulangi perulangan selama kondisinya sesuai dengan perintah.
	}
	switch (pilKas) { // untuk memilih salah satu dari banyak blok kode yang akan dieksekusi.
		case 1:{ // jika memilih 1 maka akan menampilkan output AHMAD
			strcpy(kasir,"AHMAD");
		}break;
		case 2:{ // jika memilih 1 maka akan menampilkan output KARIM
			strcpy(kasir,"KARIM");
		}break;
	}
}

struk() { // membuat function struk() yang meliputi proses pembuatan struk
	// bagian header dari struk
	cout<< "\t\t\tDOLOPO" << endl;
    cout<< "\t\t#### SHOPING CENTER ####" << endl;
    cout<< "\t\t   Jl. Adil Makmur" << endl;
    cout<< "\t\t\tDOLOPO" <<endl;
    cout<< "========================================================" << endl;
    // bagian isi dari struk
    for (int i = 0; i < items.size(); ++i) { // untuk melakukan perulangan pada array item, untuk mengeluarkan semua data yang di inputkan
    const Item & item = items[i]; // 
    total +=+ item.Total; // untuk menjumlah total harga di setiap barang yang dibeli
	TotalQty +=+ item.Jumlah; // untuk menjumlah total jumlah barang di setiap barang yang dibeli
    cout<<setw(3)<<setiosflags(ios::right)<<item.Jumlah; // untuk mengluarkan inputan jumlah barang
	cout<<"\t"<<item.Nama<<endl; // untuk mengluarkan inputan nama barang
    cout<<"\t"<<"@ "<<item.Harga<<"\t";   // untuk mengeluarkan inputan harga
	cout<<setw(37)<<setiosflags(ios::left)<<item.Total<<endl; // untuk mengeluarkan inputan total
	}
	// bagian total biaya pembelian dari tabel struk
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Total Qty	: "<<TotalQty<<endl; // untuk menampilkan output total jumlah barang yang dibeli
    cout<<"Grand Total 	: "; // untuk menampilkan output total harga yang dibeli
	cout<<setw(37); // untuk mengatur lebar kolom menjadi 37
	cout<<setiosflags(ios::right)<<totDiskon<<endl; // untuk menampilkan output total harga yang dibeli di sebelah kanan
    cout<<"Pembayaran	: "; // untuk menampilkan output uang yang dibayarakan
	cout<<setw(37); // untuk mengatur lebar kolom menjadi 37
	cout<<setiosflags(ios::right)<<bayar<<endl; // untuk menampilkan output uang yang dibayarakan di sebelah kanan
    cout<<"Voucher		: "; // untuk menampilkan output berapa voucher atau potongan harga yang didapat
	cout<<setw(37); // untuk mengatur lebar kolom menjadi 37
	cout<<setiosflags(ios::right)<<diskon<<endl; // untuk menampilkan output berapa voucher atau potongan harga yang didapat di sebelah kanan
    cout<<"Kembali		: "; // untuk menampilkan output uang kembalian
	cout<<setw(37); // untuk mengatur lebar kolom menjadi 37
	cout<<setiosflags(ios::right)<<totKembali<<endl; // untuk menampilkan output uang kembalian di sebelah kanan
    cout<<"Cara Bayar	: "<<caraBayar<<endl; // untuk menampilkan output cara bayar
	cout<<"Kasir		: "; // untuk menampilkan output kasir
	cout<<setw(2); // untuk mengatur lebar kolom menjadi 17
	cout<<setiosflags(ios::left)<<kasir<<"\t"; // untuk menampilkan output kasir di sebelah kiri
	cout<<setw(17); // untuk mengatur lebar kolom menjadi 17
	cout<<setiosflags(ios::right); // untuk menmpilkan output tanggal dan waktu di sebelah kanan
	cout<<(tPtr->tm_mday)<<"-"<< (tPtr->tm_mon)+1 <<"-"<< (tPtr->tm_year)+1900; // unutk output tanggal
	cout<<" "<<(tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<endl; // untuk output waktu
	// bagian footer dari struk
    cout<<"--------------------------------------------------------"<<endl;
    cout << "\tTerima kasih atas pembelian Anda !" << endl;
    cout << "       Barang Yang Sudah Di Beli Tidak Dapat" << endl;
    cout << "\t\tditukar/dikembalikan" << endl;
};

int main() { // unutk menampilkan program ke layar
	daftarBarang(); // untuk menampilkan function daftarBarang()
    pilihBarang(); // untuk menampilkan function pilihBarang()
	system("cls"); // untuk menghapus program sebulumnya
	prosesStruk(); // untuk menampilkan function prosesStruk()
	system("cls"); // untuk menghapus program sebulumnya
	struk(); // untuk menampilkan function struk()
    return 0;
}