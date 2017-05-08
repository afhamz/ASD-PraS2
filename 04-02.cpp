#include<iostream>
#include<math.h>
using namespace std;

/*	
			sqrt(x)  , x>0
	h(x) =     1     , x=0
	        pow(x,3) , x<0
*/

float f(int x){
	if(x>0)
		return sqrt(x);
	else if(x==0)
		return 1;
	else
		return pow(x,3);
}

main(){
	int x;
	cout<<"Masukkan x = "; cin>>x;
	cout<<"Akar dari " <<x <<" adalah "<<f(x);
}
