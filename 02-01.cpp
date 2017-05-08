#include<iostream>
using namespace std;

/*	Looping No.1
	Menjumlah N bilangan asli pertama
	Contoh: 	Input  = 3
				Output = 6
*/

main(){
	int n, i, hasil=0;
	cout<<"Masukkan bilangan : "; cin>>n;
	for(i=1;i<=n;i++)	
		hasil=hasil+i;

	cout<<"Hasil penjumlahan : "<<hasil;
	return 0;
}
