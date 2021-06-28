#include <iostream>
using namespace std;

void make(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    make(n);
    return 0;
}