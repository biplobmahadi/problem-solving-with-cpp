#include <iostream>
using namespace std;

void make(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
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