#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    int root = sqrt(n+1);
    for(int i=2; i<=root; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter n to see prime number before n = ";
    cin>>n;
    for (int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}