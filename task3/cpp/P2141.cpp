#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    int s[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int l=0;l<n-1&&flag==0;l++){
            for(int r=l+1;r<n&&flag==0;r++){
                int sum=s[l]+s[r];
                if(sum==s[i]){
                    count++;
                    flag=1;
                    break;
                }
            }
        }
    }
    
    cout<<count;
    return 0;
}