#include <iostream>
using namespace std;

void reverseNumber(int n){
    while(n != 0){
        cout<<n%10;
        n = n/10;
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    reverseNumber(n);
    return 0;
}