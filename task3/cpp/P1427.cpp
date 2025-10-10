#include<iostream>
using namespace std;
int main() {
    int a[100];
    int i=0;
    while(1){
        cin>>a[i];
        if(a[i]==0){
            break;
        }
        i++;
    }
    i--;
    for(;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
