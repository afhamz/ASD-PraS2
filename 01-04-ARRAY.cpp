#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{
	int values[3];
    int min,max;
	
    for(int i=0; i<3; i++){
		cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
	
    min=max=values[0];
	
    for (int i = 0; i <3; i++){
        if(values[i]>max){
            max=values[i];
        }
        if(values[i]<min){
            min=values[i];
        }
    }
	
    cout <<"MAX: "<< max << endl;
    cout <<"MIN: "<< min << endl;

    return 0;
}
