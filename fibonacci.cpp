#include <iostream>
using namespace std;

// recursive
// int fib(int n){
//     if(n==1){
//         return 0;
//     } else if(n == 2){
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    // showing result in recursive way
    // int res;
    // for (int i=1; ; i++){
    //     res = fib(i);
    //     if(res<=n){
    //         cout<<res<<" ";
    //     } else {
    //         cout<<endl;
    //         break;
    //     }
    // }
    int count = 0;
    int a = 0, b = 1, res = 0;
    for(int i=1; count<n; i++){
        if(i==1){
            res = a;
        } else if(i==2){
            res = b;
        } else {
            res = a+b;
            a = b;
            b = res;
        }
        cout<<res<<" ";
        count++;
        
    }
    cout<<endl;
    return 0;
}