/* CEK BILANGAN BINER */

#include <iostream>
using namespace std;

void Biner(int n){
    if(n>0){
        Biner(n/2);
        cout<<(n%2);
    }
}

int main() {
    Biner(13);
    
    return 0;
}
