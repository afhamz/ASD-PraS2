#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int jam, menit, detik, tdetik;
	
	cin>> jam >> menit >> detik;
	tdetik = 3600*jam + 60*menit + detik;
	
	cout<< tdetik <<" Detik";
	
	return 0;
}
