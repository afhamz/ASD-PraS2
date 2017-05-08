#include<iostream>
using namespace std;

/*	
	f(x) = x+3
	g(x) = x*2
*/

int f(int x){
	return x+3;
}
int g(int x){
	return x*2;
}

main(){
	int x;
	cout<<"Masukkan bilangan = "; cin>>x;
	cout<<"f(g(2)) = "<<f(g(2));
	cout<<endl;
	cout<<"g(f(2)) = "<<g(f(2));
}
