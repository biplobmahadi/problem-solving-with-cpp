#include <iostream>
using namespace std;

void largestInArray(int arr[15], int len){
    int large = arr[0];
    for(int i=0; i<len; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    cout<<large<<endl;
}

int main() {
    int arr[15] = {3, 53, 52, 532, 532, 53, 52, 634, 754, 23,  523,532, 46, 643,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    largestInArray(arr, len);
    return 0;
}