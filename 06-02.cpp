#include <iostream>
using namespace std;

float PangkatR(float x, int n)
{
    if(n==0){
        return 1;
    }
    else if(n>0){
        return n*PangkatR(x,n-1);
    }
    else{
        return (1/n)*PangkatR(x,n+1);
    }
}

int main()
{
    cout<<PangkatR(2,10);
    cout<<PangkatR(2,-10);  
}
