#include<iostream>
using namespace std;

/*
10 siswa dengan NIM
5,8,12,15,18,19,21,23,25,30
Gunakan binary search untuk menentukan
berapa banyak pencarian yang dilakukan untuk mencari NIM berikut
- 18
- 8
- 30
*/

main()
{
	int n, i, nilai[99], cari, awal, akhir, tengah;
	
	cout<<"Masukan banyak angka = ";cin>>n;
	
	for (i=0; i<n; i++){
		cout<<"Masukkan angka ke-"<<i+1<<" = ";
		cin>>nilai[i];
	}
	cout<<"Angka yang dicari = ";cin>>cari;
	
	awal   = 0;
	akhir  = n-1;
	tengah = (awal+akhir)/2;
	
	while (awal <= akhir){
		if(nilai[tengah] < cari){
			awal = tengah+1;
		}
		else if(nilai[tengah] == cari){
			cout<<cari<<" ditemukan pada posisi ke "<<tengah+1<<endl;
			break;
		}
		else{
			 akhir = tengah-1;
		}
		tengah = (awal+akhir)/2;
	}
	
	if(awal>akhir){
		cout<<cari<<" tidak ditemukan pada daftar!";
	}
	
	return 0;
}
