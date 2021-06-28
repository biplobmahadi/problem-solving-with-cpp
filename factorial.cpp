#include <iostream>
using namespace std;

// iterator approach
int fac(int n){
    int res = 1;
    for(int i = 1; i<=n ; i++){
        res *= i;
    }
    return res;
}

// recursive approach
int facRec(int n){
    if(n<=1){
        return 1;
    }
    return n * facRec(n-1);
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int res = facRec(n);
    cout<<"Result: "<<res<<endl;
    return 0;
}