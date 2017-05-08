#include<iostream>
using namespace std;

/*	Looping No.6
	Mencari FPB
	1. Baca (m,n)
	2. Selama n!=0 lakukan
		a) r = m%n
		b) m = n
		c) n = r
	3. Tulis (m) 
*/

main(){
	int m, n, i, r;
	cout<<"Masukkan M : "; cin>>m;
	cout<<"Masukkan N : "; cin>>n;
	while(n!=0){
		r = m%n;
		m = n;
		n = r;	
	}
	cout<<"Nilai M    : "<<m;
	
	return 0;
}
