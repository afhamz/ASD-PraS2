#include<iostream>
#include<math.h>
using namespace std;

/*	
	Maksimum 3 nilai ; A, B, C
*/

int max(int a, int b, int c){
	if( (b>c) && (b>a) )
		return b;
	else if( (a>c) && (a>b) )
		return a;
	else
		return c;
}

main(){
	int a,b,c;
	cout<<"Masukkan A B C = "; cin>>a>>b>>c;
	cout<<"Bilangan terbesar adalah "<<max(a,b,c);
}
