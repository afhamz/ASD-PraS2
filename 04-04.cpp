#include<iostream>
using namespace std;

/*	
	Fungsi untuk mengecek apakah
	bilangan habis dibagi 3 atau tidak
*/

bool habis(int x){
	if(x%3==0)
		return true;
	else
		return false;
}

main(){
	int x;
	cout<<"Masukkan bilangan = "; cin>>x;
	if(habis(x)==true)
		cout<<"Bilangan HABIS dibagi 3 gan!";
	else
		cout<<"Bilangan TIDAK habis dibagi 3 sis!";
}
