#include <iostream>
using namespace std;

void sumOfNatural(int n){
    int sum = 0;
    sum = (n * (n+1))/2;
    cout<<sum<<endl;
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    sumOfNatural(n);
    return 0;
}