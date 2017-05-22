#include <iostream>
using namespace std;

void Apa(int n){
    if(n>0){
        Apa(n/2);
        cout<<(n%2);
    }
}

int main() {
    Apa(13);
    
    return 0;
}
