#include<iostream>
using namespace std;

/*
Buatlah program menampilkan
nilai terbesar dari N data nilai
*/
main(){
	int nilai[99], n, i, c=0, max;
	cout<<"Banyak Nilai = ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cin>>nilai[i];	
	}
	
	max=nilai[0];
	for(i=1;i<n;i++)
		if(nilai[i]>=max)
			max=nilai[i];
		else 
			max=max;
	
	cout<<"Nilai terbesar adalah = "<<max;
	
	return 0;
}
