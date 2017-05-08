#include<iostream>
using namespace std;

/*	
	Fungsi Matimatik
	f(x,y) = 3x-y+10
*/

int f(int x, int y){
	return 3*x-y+10;
}

main(){
	int x,y;
	cout<<"Masukkan x = "; cin>>x;
	cout<<"Masukkan y = "; cin>>y;
	cout<<"Hasil f(x,y)=3x-y+10 adalah "<<f(x,y);
}
