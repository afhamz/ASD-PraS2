#include<iostream>
using namespace std;

int f(int a, int b){
	if (b==0)
		return a;
	else if (a==0)
		return b;
	else if ((a!=0)&&(b!=0))
		return f(a+1,b-1) ;
}

int main(){
	cout<<"NILAI F(40,10) = "<<f(40,10);
	
	return 0;
}
