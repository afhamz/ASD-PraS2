/* PANGKAT REKURSIF */

#include <iostream>
using namespace std;

float PangkatR(float x, int n){
    if(n==0)
        return 1;
    else if(n>0)
        return n*PangkatR(x,n-1);
    else
        return (1/n)*PangkatR(x,n+1);
}

float PangkatR2(float x, int n){
    float tmp;
    
    if(n==0){
        return 1;
    }
    else{
        tmp = PangkatR2(x,n/2);
        if(n%2==0)
            return tmp*tmp;
        else
            return tmp*tmp*x;
    }
}

int main(){
    cout<<PangkatR(2,10)<<endl;
    cout<<PangkatR(2,-10)<<endl;  
    cout<<PangkatR2(2,10)<<endl;
    cout<<PangkatR2(2,-10)<<endl;  
    
    return 0;
}
