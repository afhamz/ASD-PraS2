#include<iostream>
using namespace std;

/*	Looping No.5
	Program menentukan apakah bil.bulat positif n adalah prima/bukan
	Contoh: 	n = 37
				37 adalah bilangan prima
*/

main(){
	int n, i, prima=0;
	cout<<"Masukkan bilangan : "; cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			prima++;
		}
	}
	if(prima==2){
		cout<<n<<" merupakan bilangan PRIMA";
	}else{
		cout<<n<<" BUKAN bilangan prima";
	}
}
