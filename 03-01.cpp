#include<iostream>
using namespace std;

/*
Terdapat N nilai masing2 antara 0-100
buatlah program untuk menampilkan banyaknya nilai
yang lebih besar dari 60
*/

main(){
	int nilai[99], n, i, c=0;
	cout<<"Banyak Nilai = ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cin>>nilai[i];	
	}
	
	for(i=0;i<n;i++)
		if(nilai[i]>60)
		c=c+1;
	
	cout<<"Banyak data lebih dari 60 = "<<c;
	
	return 0;
}
