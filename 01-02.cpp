#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int tdetik, jam, menit, detik, sisa;
	
	cin>> tdetik;
	jam	  = tdetik/3600;
	sisa  = tdetik%3600;
	menit = sisa/60;
	detik = sisa%60;
	
	cout<< jam <<" Jam"<< menit <<" Menit"<< detik <<" Detik";
	
	return 0;
}
