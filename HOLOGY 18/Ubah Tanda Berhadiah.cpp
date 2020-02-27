#include <iostream>
using namespace std;

int main (){
	
	int n,m,a[100],jum=0;
	
	cin>>n;
	
	if(n>=2 && n<=100){
	m=n*2-1;
	for (int i=0;i<m;i++){ 
		cin>>a[i];
		if (a[i]<0 && i<=(n-1)){ // untuk mengubah tanda (+/-) 2 angka didepan
			a[i]=a[i]*-1;
		}
		jum=jum+a[i];
	}
	
	cout<<jum;
	
	}
	
	
}
