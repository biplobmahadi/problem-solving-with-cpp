#include <iostream>
using namespace std;

// euclidio
int gcd(int a, int b){
    if(a%b==0){
        return b;
    } 
    return gcd(b, a%b);
}

// normal
// int gcd(int a, int b){
//     int res;
//     if(a>b){
//         int i = b;
//         while(a%i!=0 || b%i!=0){
//             i--;
//         }
//         res = i;
//     } else{
//         int i = a;
//         while(a%i!=0 || b%i!=0){
//             i--;
//         }
//         res = i;
//     }
//     return res;
// }

int main() {
    int a, b;
    cout<<"Enter a, b = ";
    cin>>a>>b;
    int res = gcd(a, b);
    cout<<res<<endl;
    return 0;
}