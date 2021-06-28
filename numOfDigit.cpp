#include <iostream>
using namespace std;

int numOfDigit(int n){
    int i = 0;
    while(n!=0){
        n/=10;
        i++;
    }
    return i;
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int res = numOfDigit(n);
    cout<<"Result: "<<res<<endl;
    return 0;
}