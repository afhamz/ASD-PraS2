#include<iostream>
using namespace std;

/*	Looping No.3
	Program menghitung jumlah -1+2-3+4-5......dst
	Contoh: 	Input  = 2
				Output = 1
*/

main(){
	int n, i, hasil=0, tanda=-1;
	cout<<"Masukkan angka    : "; cin>>n;
	for(i=1;i<=n;i++){
		hasil=hasil+(i*tanda);
		tanda=tanda*(-1);
	}
	cout<<"Hasil perhitungan : "<<hasil;
	return 0;
}
