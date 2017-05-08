#include<iostream>
using namespace std;

/*	Looping No.4
	Program menentukan apakah bil.bulat positif n adalah prima/bukan
	Contoh: 	n = 10
				faktor = 4
				ket.faktor 10 = 1,2,5,10 
*/

main(){
	int n, i, hasil=0;
	cout<<"Masukkan angka : "; cin>>n;
	cout<<"Keterangan     : ";
	for(i=1;i<=n;i++){
		if(n%i==0){
			hasil=hasil+1;
			cout<<i<<" ";
		}
	}
	cout<<endl<<"Faktor         : "<<hasil;
	return 0;
}
