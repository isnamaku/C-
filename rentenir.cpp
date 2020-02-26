#include <iostream>
using namespace std;


int hutang (int uang, int selesai);


int main (){
	
	struct hut {
	int uang,selesai;
	};
	struct orang {
		string nama;
		string alamat;
		string nope;
		hut huang;
	}orang ;
	
	
	char jawab;int bunga;
	
	
cout<<"Selamat datang di jasa Peminjaman Uang BukaPinjaman \n";

	cout<<"Data peminjam  \n";
cout<<"Nama peminjam\t : ";getline (cin,orang.nama);
cout<<"Alamat peminjam\t : ";cin>>orang.alamat;
cout<<"No HP peminjam\t : ";cin>>orang.nope;
do {
cout<<"Data pinjaman  \n";
cout<<"Masukkan jumlah uang yang dipinjam\t: ";
cin>>orang.huang.uang;	
cout<<"Masukkan berapa kali pengembalian\t: ";
cin>> orang.huang.selesai;
bunga=orang.huang.uang*0.1;
cout<<"Anda mendapat bunga 10%\t: "<<bunga<<endl;

	cout<<"\n-----------------------------------------------------------------\n";
	cout<<"Berkas Pengembalian : \n";
	cout<<"Nama peminjam\t : "<<orang.nama<<endl;
	cout<<"Alamat peminjam\t : "<<orang.alamat<<endl;
	cout<<"No HP peminjam\t : "<<orang.nope<<endl;
	cout<<"Jumlah Pengembalian  "<<" : "<<endl; 
	hutang(orang.huang.uang,orang.huang.selesai);
	cout<<"\n-----------------------------------------------------------------\n";
	cout<<"Mau hutang lagi ? ";
	cin>>jawab;
	system("cls");
}while (jawab!='n');
	
	
	


	
}
int hutang (int uang,int selesai){
	int kembali=uang/selesai;
	int bunga=0.1*uang;
	int kurang=bunga/selesai;
	int utang;
	
	
	if (selesai==1||selesai==0){

	cout<<kembali+kurang;
	cout<<endl;
	}
	
	else {
	
	cout<<kembali+kurang;
	cout<<endl;
	utang =  hutang(uang-kembali,selesai-1);
	}
	
	return utang;
}


