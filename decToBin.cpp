#include <iostream>
using namespace std;

void decToBin(int n){
    int arr[10];
    int num = n;
    int rem;
    int i = 0;
    while(num!=0){
        arr[i] = num%2;
        i++;
        num = num/2;
    }
    int j = --i;
    while(j>=0){
        cout<<arr[j];
        j--;
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    decToBin(n);
    return 0;
}