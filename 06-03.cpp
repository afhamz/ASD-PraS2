#include <iostream>
using namespace std;

void Star(int n){
    int i;
    if(n==1)
        cout<<"*";
    else{
        Star(n-1);
        cout<<endl;
        
        for(i=1;i<=n;i++)
            cout<<"*";
        cout<<endl;
        
        Star(n-1);
    }
}

int main() {
    Star(4);
    
    return 0;
}
