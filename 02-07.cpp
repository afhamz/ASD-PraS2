#include<iostream>
using namespace std;

/*	Looping No.7
	1. Baca (a,b)
	2. a	   8		2
	   -  -->  -	=	-
	   b	   12		3
	3. Input 	8  40
       Output 	1  5
*/

main(){
	int a, a1, a2, b, b1, b2, r;
	cout<<"Masukkan A : "; cin>>a;
	cout<<"Masukkan B : "; cin>>b;
	a1=a;
	b1=b;
	while(b!=0){
		r = a%b;
		a = b;
		b = r;
	}
	a2=a1/a;
	b2=b1/a;
	cout<<"A : "<<a2<<endl;
	cout<<"B : "<<b2;
	
	return 0;
}
