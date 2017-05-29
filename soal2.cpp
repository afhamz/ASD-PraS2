#include<iostream>
using namespace std;

int main(){
	int N;
	int x=0;
	string hari;
	
	cout<<"JUMLAH HALAMAN = ";cin>>N;
	
	while(N>0)
	{
		for (int i=1;i<=7;i++)
		{
			if ((N>0)&&(x<7))
			{
				N=N-2;
				x++;
			}
			else if((N>0)&&(x>=7))
			{
				x=1;
				N=N-2;
			}	
		}
	}
	if (x==1)
		hari = "SENIN";
	else if (x==2)
		hari = "SELASA"; 
	else if (x==3)
		hari = "RABU";
	else if (x==4)
		hari = "KAMIS";
	else if (x==5)
		hari = "JUM'AT";
	else if (x==6)
		hari = "SABTU";
	else
		hari = "MINGGU";
		
	cout<<"SELESAI PADA HARI "<<hari;
	
	return 0;
}

