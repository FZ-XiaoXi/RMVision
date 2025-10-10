#include<iostream>
#include<math.h>
using namespace std;
int a[30],i=0,j;
long long s=0;
int main(){
    while(cin>>a[i]){
        i++;
    }
    for(j=0;j<=i;j++){
        s+=a[j];
    }
    s*=pow(2,i-1);
    cout<<s;
    return 0;
}