#include<iostream>
using namespace std;

int main(){
	int N, x, i, j, a[100], t;	
	cout<<"MASUKAN JUMLAH.PESERTA = ";cin>>N;
	
	for (i=1;i<=N;i++){
		cout<<"MASUKAN TINGGI BADAN PESERTA KE-"<<i<<" = ";cin>>a[i];
	}
	for (i=1;i<=N-1;i++)
  		for (j=1;j<=N-i;j++) 
   			if (a[j]<a[j+1]){
   				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for (i=1;i<=N;i++){
		if (a[i]==165)
		x=i;
	}	
	cout<<"NO URUT PRAS = "<<x;
	
	return 0;
}
