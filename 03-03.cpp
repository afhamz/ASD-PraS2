#include<iostream>
using namespace std;

/*
Diberikan sejumlah N data nilai
Buatlah program menjumlahkan 2 nilai terbesarnya
*/

main(){
	int nilai[99], n, i, c=0, max1, max2;
	cout<<"Banyak Nilai = ";cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cin>>nilai[i];	
	}
	if(nilai[0]>=nilai[1]){
		max1=nilai[0];
		max2=nilai[1];
	}
	else{
		max1=nilai[0];
		max2=nilai[1];
	}
	
	for(i=2;i<n;i++)
		if(nilai[i]>max1){
			max2=max1;
			max1=nilai[i];
		}
		else if(nilai[i]>max2){
			max2=max1;
			max2=nilai[i];
		}
	
	cout<<"Jumlah 2 nilai terbesar = "<<max1+max2;
	
	return 0;
}
