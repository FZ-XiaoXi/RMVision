#include<iostream>
#include<math.h>
using namespace std;
void ifQual(int k);
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ifQual(a[i]);
    }

    return 0;
}
void ifQual(int k){
    if(k==2 || k==3){
        cout<<k<<" ";
    }else if(k>=5){
        if(((k+1)%6==0)||((k-1)%6==0)){
            for(int i=2;i<=sqrt(k);i++){
                if(k%i==0){
                    return;
                }
            }
            cout<<k<<" ";
        }
    }
}