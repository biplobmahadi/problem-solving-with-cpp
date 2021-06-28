#include <iostream>
using namespace std;

void multiplicationTable(int n){
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    multiplicationTable(n);
    return 0;
}