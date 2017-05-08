#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	int jam1, jam2, menit1, menit2, detik1, detik2, tdetik1, tdetik2, output, sisanya, jamnya, menitnya, detiknya;
	
	cin>> jam1 >> menit1 >> detik1;
	cin>> jam2 >> menit2 >> detik2;
	
	tdetik1  = 3600*jam1 + 60*menit1 + detik1;
	tdetik2  = 3600*jam2 + 60*menit2 + detik2;
	output   = abs(tdetik2-tdetik1);
	
	jamnya	 = output/3600;
	sisanya	 = output%3600;
	menitnya = sisanya/60;
	detiknya = sisanya%60;
	
	cout<<"Selisih: "<< jamnya <<" Jam"<< menitnya <<" Menit"<< detiknya <<" Detik";
	
	return 0;
}
