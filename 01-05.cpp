#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int A, B, C, MAX;
	
	cin>> A >> B >> C;
	MAX = (A+B+C)/3;
	
	if( (MAX>=50) && (A&&B&&C >= 40) ){
		cout<<"LULUS";
	}
	else{
		cout<<"TIDAK LULUS";
	}
	
	return 0;
}
