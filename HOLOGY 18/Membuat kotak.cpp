/*
 Soal Hology CP 2018
 NB : Masih butuh untuk diperbaiki karena output pada contoh terakhir masih
 * kurang tepat.
 * 

H. Membuat Kotak

Di depan teras sambil menikmati senja, Brone sedang meminum kopi. Namun ia 
kini merasakan kebosanan akibat kehampaan dalam hatinya. Akhirnya ia teringat 
bahwa ia memiliki n buah stik khusus dan sebuah pemotong stik. Setiap stik yang 
ia punya memiliki panjang li.
Untuk mengurangi kebosanannya karena kopi yang ia minum sudah habis dan senja 
pun berganti malam, ia ingin membuat kotak dari stik-stik yang ia punya. Setiap 
stik hanya bisa dipakai untuk 1 kotak saja dan mungkin saja ada stik yang tidak 
terpakai.
* 
Sebuah kotak dapat dibuat dari 4 stik dengan panjang stiknya l1, l2, l3, l4 dan 
memenuhi
l1 = l2 l3 = l4
untuk l1 ≤ l2 ≤ l3 ≤ l4
* 
Sebagai contoh 4, 4, 4, 4 atau 3, 4, 4, 3 dapat menjadi kotak. Namun, stik berukuran 
6, 6, 6, 8 tidak dapat menjadi kotak.
Brone ingin membuat kotak yang besar dan banyak dari n stiknya. Ia ingin tahu 
berapa jumlah luas maksimal yang ia bisa dapatkan.
Setiap stik yang digunakan Brone boleh dipotong ataupun tidak, namun yang 
namanya stik khusus harus dipotong dengan pemotong khusus juga. Pemotong yang 
digunakan Brone dapat memotong stik sehingga mengurangi hanya 1 ukuran 
panjangnya. Stik yang sudah dipotong tidak dapat dipotong lagi.
Mohon bantu Brone lagi menyelesaikan masalahnya dengan mencari nilai 
maksimum dari jumlah semua luas kotak yang ia buat sebelum malam berganti 
fajar.
* 
* 
Input
Baris pertama berisikan sebuah bilangan bulat n (1 ≤ n ≤ 105) yaitu banyak stik 
yang ia punya.
Baris kedua berisi n buah bilangan li (2 ≤ li ≤ 106) yaitu panjang setiap stiknya.
Output
Keluarkan sebuah bilangan bulat nilai maksimum dari jumlah luas kotak yang ia 
bisa buat.
* 
* 
Contoh
Input
4
2 4 4 2
Output
8Input
4
2 2 3 5
Output
0Input
4
100003 100004 100005 100006
Output
10000800015
 * 
 * */


#include <iostream>
using namespace std;
int main (){

	int n,max=0,min=100,temp;
	
	cin>>n;
	int l[n],luas;
	
	for (int i=0;i<n;i++){
		cin>>l[i];
	}
	
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n-1-i;j++){
			if (l[j]>l[j+1]){
				temp=l[j];
				l[j]=l[j+1];
				l[j+1]=temp;
				
			}
		}
	}
	
	for (int i=0;i<n;i++){
		cout<<l[i];
	}
	
	for (int i=0;i<n;i++){
		if (n<2){
			for (int j=0;j<n-2;j++){
				if ((l[j+1]-l[j])==1)
					l[j+1]=l[j];
				else if ((l[j+1]==l[j]))
					l[j+1]=l[j];
				else if ((l[j+1]-l[j])>1)
				l[j+1]=0;}
	}
		
		 if (n>2){
			for (int j=2;j<=n;j++){
				if ((l[j+1]-l[j])==1)
					l[j+1]=l[j];
				else if ((l[j+1]==l[j]))
					l[j+1]=l[j];
					else
				l[j+1]=0;
			
		}

}
}
	for (int i=0;i<n;i++){
		cout<<l[i];}
	
	for (int i=0;i<n;i++){
		if (l[i]>max)
		max=l[i];
		if(l[i]<min)
		min=l[i];
	}
	
	cout<<endl;
	luas=max*min;
	cout<<luas;

}

