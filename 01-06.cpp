#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int a, b, c;
	
	cin>> a >> b >> c;
	if( (a+b)>c && (a+c)>b && (b+c)>a ){
		cout<<"SEGITIGA";
	}
	else{
		cout<<"BUKAN SEGITIGA";
	}
	
	return 0;
}
