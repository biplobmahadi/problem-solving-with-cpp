#include <iostream>
using namespace std;

int pow(int m, int n){
    int res = 1;
    for(int i = 1; i<=n ; i++){
        res *= m;
    }
    return res;
}


int main() {
    int m, n;
    cout<<"Enter m, n = ";
    cin>>m>>n;
    int res = pow(m, n);
    cout<<"Result: "<<res<<endl;
    return 0;
}