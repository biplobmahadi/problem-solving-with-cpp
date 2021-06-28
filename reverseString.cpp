#include <iostream>
using namespace std;

void reverseString(char name[], int len){
    for(int i=len-1; i>= 0; i--){
        cout<<name[i];
    }
    cout<<endl;
}

int main() {
    char name[] = "biplob Mahadi";
    int len = sizeof(name)/sizeof(name[0]);
    cout<<len<<endl;
    reverseString(name, len);
    return 0;
}