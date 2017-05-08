#include<iostream>
using namespace std;

/*	Looping No.2
	Menampilkan deret sampai suku ke-n
	Contoh: 	Input  = 3
				Output = 1  3  6
*/

main(){
	int n, i, hasil=0;
	cout<<"Total bilangan : "; cin>>n;
	cout<<"Deret bilangan"<<endl;
	for(i=1;i<=n;i++){
		hasil=hasil+i;
		cout<<hasil<<" ";
	}
	return 0;
}
