//Project Game //

#include <iostream>
#include<conio.h>
void option1();
void option3();
void option2();

using namespace std;
int no;
int x,i,j,kolom,baris,tahap,urt,matriks1;
char pil,opsi,simbol;
string user;
bool password ();


bool password () {	
		string password;
	
	cout<<"______________________________________________________________"<<endl
		<<"|		 	HALAMAN LOGIN		   	      |"<<endl
		<<"|_____________________________________________________________|\n\n";
		cout<<"Masukkan username : "; cin>>user; 
		password="apa";
		cout<<"Masukkan password : ";cin>>password;		
		cout<<endl;
		return (password=="apa"&&(user=="isna"||user=="fauzan"));
	}

void case1 () {
	
	baris=3;
	kolom=3;

	int matriks1 [baris][kolom];
	
	cout<<"\n______________________SELAMAT DATANG DI PERMAINAN TIC TAC TOE______________________"<<endl;
	cout<<"| Peraturan Permainan : 						  	  |"<<endl
		<<"| 1. Permainan dilakukan oleh 2 orang.						  |"<<endl
		<<"| 2. Permainan dilakukan secara bergantian (pemain 1 dan 2).			  |"<<endl
		<<"| 3. Pemain ke-2 tidak boleh memilih pilihan yang telah dipilih pemain pertama.	  |"<<endl;
	cout<<"|_________________________________________________________________________________|"<<endl<<endl;
		
	for	(int i = 0; i < 3; i++) {
		
		for (int j = 0; j < 3; j++) {
			matriks1[i][j] = 0;
		}
		
	}
	cout<<"Awal Permainan : "<<endl;
	
	for (i=0;i<baris;i++) {
	cout<<"| ";
	
		for (j=0;j<kolom;j++) {
		cout<<matriks1 [i][j]<<" ";
		}
	cout<<" |";
	cout<<endl;
	
	}
	
	cout<<endl;
	
	do	{
	cout<<endl<<"Pemain ke (1/2)? ";cin>>urt;cout<<endl;
		cout<<"Pilih kolom yang diinginkan : "<<endl
				<<"_________________________________"<<endl
				<<"a. baris [0][0]" <<endl
				<<"b. baris [0][1]"<<endl
				<<"c. baris [0][2]"<<endl
				<<"d. baris [1][0]"<<endl
				<<"e. baris [1][1]"<<endl
				<<"f. baris [1][2]"<<endl
				<<"g. baris [2][0]"<<endl
				<<"h. baris [2][1]"<<endl
				<<"i. baris [2][2]"<<endl
				<<"_________________________________"<<endl
				<<"pilihan :";
				pil=getche();
				cout<<endl;

		if (pil=='a') {
			matriks1[0][0]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					
					cout<<" |";
					cout<<endl;
			}
		}
		
		else if (pil=='b') {
			matriks1[0][1]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					
					cout<<" |";	
					cout<<endl;
				}
		}
				
		else if (pil=='c')	{
			matriks1[0][2]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
				cout<<matriks1 [i][j]<<" ";
				}
				
				cout<<" |";
				cout<<endl;
			}
		}		
				
		
		else if (pil=='d')	{
			matriks1[1][0]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++)	{
					cout<<matriks1 [i][j]<<" ";
					}
					
					cout<<" |";	
					cout<<endl;
				}
		}
				
		else if (pil=='e')	{
			matriks1[1][1]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++)
				{
				cout<<"| ";
				
				for (j=0;j<kolom;j++)	{
					cout<<matriks1 [i][j]<<" ";
					}
					
					cout<<" |";
					cout<<endl;
				}
		}			
				
		else if (pil=='f')	{
			matriks1[1][2]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					cout<<" |";
					cout<<endl;
				}
		}			
				
				
		else if (pil=='g'){
			matriks1[2][0]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					cout<<" |";
					cout<<endl;
				}
		}			
				
				
		else if (pil=='h') {
			matriks1[2][1]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					cout<<" |";
					cout<<endl;
				}
		}		
		
		else if (pil=='i') {
			matriks1[2][2]=urt;
			cout<<"Perubahan : "<<endl;
			
			for (i=0;i<baris;i++) {
				cout<<"| ";
				
				for (j=0;j<kolom;j++) {
					cout<<matriks1 [i][j]<<" ";
					}
					cout<<" |";
					cout<<endl;
				}		
			}

	if (
		(matriks1[0][0]==1&&matriks1[0][1]==1&&matriks1[0][2]==1) || 
		(matriks1[1][0]==1&&matriks1[1][1]==1&&matriks1[1][2]==1) ||
		(matriks1[2][0]==1&&matriks1[2][1]==1&&matriks1[2][2]==1) ||
		(matriks1[0][0]==1&&matriks1[1][0]==1&&matriks1[2][0]==1) ||
		(matriks1[0][1]==1&&matriks1[1][1]==1&&matriks1[2][1]==1) ||
		(matriks1[0][2]==1&&matriks1[1][2]==1&&matriks1[2][2]==1) ||
		(matriks1[0][0]==1&&matriks1[1][1]==1&&matriks1[2][2]==1) ||
		(matriks1[0][2]==1&&matriks1[1][1]==1&&matriks1[2][0]==1)     
		)
		{ 
		cout<<endl<<"PEMAIN PERTAMA MENANG!!"<<endl; cout<<"Input 0 untuk keluar dari game ";cin>>opsi;
			}
	
	else if (
		(matriks1[0][0]==2&&matriks1[0][1]==2&&matriks1[0][2]==2) || 
		(matriks1[1][0]==2&&matriks1[1][1]==2&&matriks1[1][2]==2) ||
		(matriks1[2][0]==2&&matriks1[2][1]==2&&matriks1[2][2]==2) ||
		(matriks1[0][0]==2&&matriks1[1][0]==2&&matriks1[2][0]==2) ||
		(matriks1[0][1]==2&&matriks1[1][1]==2&&matriks1[2][1]==2) ||
		(matriks1[0][2]==2&&matriks1[1][2]==2&&matriks1[2][2]==2) ||
		(matriks1[0][0]==2&&matriks1[1][1]==2&&matriks1[2][2]==2) ||
		(matriks1[0][2]==2&&matriks1[1][1]==2&&matriks1[2][0]==2)     
		) {
		cout<<endl<<"PEMAIN KEDUA MENANG!!"<<endl; cout<<"Input 0 untuk keluar dari game ";cin>>opsi;
		}
	else if(
		(matriks1[0][0]==1||matriks1[0][0]==2)&&
		(matriks1[0][1]==1||matriks1[0][1]==2)&&
		(matriks1[0][2]==1||matriks1[0][2]==2)&&
		(matriks1[1][0]==1||matriks1[1][0]==2)&&
		(matriks1[1][1]==1||matriks1[1][1]==2)&&
		(matriks1[1][2]==1||matriks1[1][2]==2)&&
		(matriks1[2][0]==1||matriks1[2][0]==2)&&
		(matriks1[2][1]==1||matriks1[2][1]==2)&&
		(matriks1[2][2]==1||matriks1[2][2]==2)
	) {
		cout<<"SERIIIII!!"<<endl; cout<<"Input 0 untuk keluar dari game ";cin>>opsi;
	}
	
	else {
		opsi = 0;
	}
 
	}while (opsi==0);
	
	cout<<endl<<"Preview hasil "<<endl;
	for (i=0;i<baris;i++) {
		cout<<"| ";
	
		for (j=0;j<kolom;j++) 	{
		cout<<matriks1 [i][j]<<" ";
		}
		cout<<" |";
		cout<<endl;
		
	}
	option1 ();
	cout<<endl;
	}

void case2 () {
	char x,y,z,w;
	
	cout<<endl<<"\n______________________SELAMAT DATANG DI PERMAINAN TEBAK ANGKA_____________________"<<endl;
				cout<<"| Peraturan Permainan : 							  |"<<endl
					<<"| 1. Permainan ini dilakukan oleh maksimal 2 orang saja.			  |"<<endl
					<<"| 2. Pemain ke-1 memasukkan angka dan pemain ke-2 menebak angka atau sebaliknya   |"<<endl;
				cout<<"|_________________________________________________________________________________|"<<endl<<endl;
				cout<<"Masukkan Angka 1-9 : ";
	x=getch();
	cout<<endl;
	do {
	cout<<"Pilih angka (1-9)	: ";cin>>y;
	cout<<endl;
	
	if (x==y) {
	cout<<"ANDA BENAR! "<<endl;
	cout<<"Keluar dari game? (y/n) : ";cin>>w;
	}
	
		else {
		cout<<"ANDA SALAH! "<<endl
			<<"Mau coba nebak lagi? (y/n) : ";cin>>z;
		cout<<endl;
	}

	}while (w!='y'&& z!='n');
	
	cout<<endl<<"Preview Hasil : \n"
			  <<"Angka yang dimasukan yaitu : "<<x<<endl<<endl;
	option2 ();
	}

void case3 () {
	
		int pil1,pil2;
	char ulang;

	cout<<"\n__________________SELAMAT DATANG DI PERMAINAN BATU GUNTING KERTAS_________________"<<endl;
	cout<<"| Peraturan Permainan : 						  	  |"<<endl
		<<"| 1. Permainan ini dilakukan oleh maksimal 2 orang saja.			  |"<<endl
		<<"| 2. Permainan dilakukan secara bergantian (pemain 1 dan 2).			  |"<<endl
		<<"| 3. Pemain hanya bisa memilih satu diantara BATU, GUNTING, atau KERTAS		  |"<<endl;
	cout<<"|_________________________________________________________________________________|"<<endl<<endl;
	
	do {
	
		cout<<"\n-----Pemain 1-----";
	cout<<"\n	Pilihan \n";
	cout<<"	a. Batu \n";
	cout<<"	b. Gunting \n";
	cout<<"	c. Kertas \n";
	cout<<"Pilih : "; pil1=getch();
	
		cout<<"\n-----Pemain 2-----";
	cout<<"\n	Pilihan \n";
	cout<<"	a. Batu \n";
	cout<<"	b. Gunting \n";
	cout<<"	c. Kertas \n";
	cout<<"Pilih : "; pil2=getch();
	
	cout<<endl;
	cout<<"\n\tHasil Akhir : ";
	switch (pil1) {
		case 'a' :
			cout<<"Batu";
			break;
		case 'b' :
			cout<<"Gunting"; 
			break;		
		case 'c' :
			cout<<"Kertas";
			break;
	}
	
	cout<<" VS ";

	switch (pil2) {
		case 'a' :
			cout<<"Batu";
			break;
		case 'b' :
				cout<<"Gunting"; 
			break;		
		case 'c' :
			cout<<"Kertas";
			break;
	}
		cout<<endl;
	
	if (
		(pil1=='a' && pil2=='b') || 
		(pil1=='c' && pil2=='a') ||
		(pil1=='b' && pil2=='c'))
			cout<<"\n=====Pemain PERTAMA Menang HOREEEEE====="<<endl;
		
		else if (
		(pil2=='a' && pil1=='b') || 
		(pil2=='c' && pil1=='a') ||
		(pil2=='b' && pil1=='c'))	
			cout<<"\n=====Pemain KEDUA Menang YYYEEEEE====="<<endl;
	
			else if (
			(pil2=='a' && pil1=='a') || 
			(pil2=='c' && pil1=='c') ||
			(pil2=='b' && pil1=='b'))	
			cout<<"=====SERIIIIIIIII====="<<endl;
	
	cout<<"\nIngin Bermain Gunting Batu Kertas lagi? (y/n) : "; cin>>ulang;
	}while (ulang=='y');		
	option3 ();									
}

void menu () {
	cout<<"======================= PILIHAN GAME ========================="<<endl;
	cout<<"| Pilih Permainan yang Kamu Ingin : 				|"<<endl
		<<"|	1. Tic Tac Toe						|"<<endl
		<<"|	2. Tebak Angka						|"<<endl
		<<"|	3. Batu Gunting Kertas					|"<<endl;
	cout<<"  =============================================================";		
	cout<<"\nPilih	: ";cin>>no;
	
	switch (no) {
		case 1: {
			case1 ();
				break;
		}

		case 2 : {
			case2 ();
				break;
		}
		
		case 3 :{	
			case3 ();
				break; 
		}
	}
	
	}

void keluar () {
	
	cout<<"*****	*****	*******	 *****	*****	*****	**   *	*****		\n";	
	cout<<"*	*   *	*  *  *	 *	   *	*   *	* *  *	*					\n";	
	cout<<"*  **	*****	*  *  *	 *****	  *	*   *	*  * *	*****			\n";
	cout<<"*   *	*   *	*  *  *	 * 	*	*   *	*    *	*					\n";	
	cout<<"*****	*   *	*  *  *	 *****	***** 	*****	*    *	*****		\n\n";
	cout<<"Input sembarang untuk keluar... ";
	getch ();
	cout<<endl<<endl;
}

void option1 () {
cout<<endl<<"==================== MENU : ==================== \n"
			<<"| a. Balik ke menu?				|\n"	
			<<"| b. Main lagi? 				|\n"
			<<"| c. Keluar dari zona game			|\n"
			<<"================================================\n"
			<<"Pilih	: ";cin>>simbol;cout<<endl;		
			
			if (simbol=='a') {
				menu ();
			}
				else if (simbol=='b') {
					case1 ();	
				}
					else if (simbol=='c') {
						cout<<"TERIMAKASIH SUDAH BERMAIN DI \n\n"; keluar ();
					}
	}

void option2 () {
cout<<endl<<"==================== MENU : ==================== \n"
			<<"| a. Balik ke menu?				|\n"	
			<<"| b. Main lagi? 				|\n"
			<<"| c. Keluar dari zona game			|\n"
			<<"================================================\n"
			<<"Pilih	: ";cin>>simbol;cout<<endl;		
			
			
			if (simbol=='a') {
				menu ();
			}
				else if (simbol=='b') {
					case2 ();	
				}
					else if (simbol=='c') {
						cout<<"TERIMAKASIH SUDAH BERMAIN DI \n\n"; keluar ();
						}
}

void option3 () {
cout<<endl<<"==================== MENU : ==================== \n"
			<<"| a. Balik ke menu?				|\n"	
			<<"| b. Main lagi? 				|\n"
			<<"| c. Keluar dari zona game			|\n"
			<<"================================================\n"
			<<"Pilih	: ";cin>>simbol;cout<<endl;		
			
			
			if (simbol=='a') {
				menu ();
			}
				else if (simbol=='b') {
					case3 ();	
				}
					else if (simbol=='c') {
						cout<<"TERIMAKASIH SUDAH BERMAIN DI \n\n"; keluar ();
					}
	}


int main () { 
	
	if (password ()) {
	cout<<"BERHASIL MASUK  :D \n "<<endl<<endl;
	}
		else {
			cout<<"GAGAL MASUK! SILAHKAN COBA LAGI :) "<<endl<<endl;
			main ();
			}
	
	cout<<"SELAMAT DATANG DI..\n\n";
	cout<<"*****	*****	*******	 *****	*****	*****	**   *	*****		\n";	
	cout<<"*	*   *	*  *  *	 *	   *	*   *	* *  *	*					\n";	
	cout<<"*  **	*****	*  *  *	 *****	  *	*   *	*  * *	*****			\n";
	cout<<"*   *	*   *	*  *  *	 * 	*	*   *	*    *	*					\n";	
	cout<<"*****	*   *	*  *  *	 *****	***** 	*****	*    *	*****		\n\n";
	cout<<"Input sembarang untuk melanjutkan... ";
	getch ();
	cout<<endl<<endl;
	
	
	cout<<" ======================= PILIHAN GAME ========================="<<endl;
	cout<<"| Pilih Permainan yang Kamu Ingin : 			       |"<<endl
		<<"|	1. Tic Tac Toe					       |"<<endl
		<<"|	2. Tebak Angka					       |"<<endl
		<<"|	3. Batu Gunting Kertas				       |"<<endl;
	cout<<" =============================================================";		
	cout<<"\nPilih	: ";cin>>no;
	
	switch (no) {
	case 1:{
		case1 ();
				break;
		}
	
	case 2 : {
		case2 ();
				break;
		}
	
	case 3 :{	
		case3 ();
				break; 

		}
	}

	return 0;
}

