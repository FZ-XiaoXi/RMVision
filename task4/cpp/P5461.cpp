#include<iostream>
#include<math.h>
using namespace std;

int a[1025][1025];
void cut(int x1,int y1,int x2,int y2);
int main(){
    int n,s;
    cin>>n;
    s=pow(2,n);
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            a[i][j]=1;
        }
    }
    cut(1,1,s,s);
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
void cut(int x1,int y1,int x2,int y2){
    if(x1>=x2){
        return;
    }
    int l=0;
    for(int i=x1;i<(x2-x1+1)/2+x1;i++){
        for(int j=y1;j<(y2-y1+1)/2+y1;j++){
            a[i][j]=0;

        }
        l++;
    }
    cut(x1+l,y1+l,x2,y2);
    cut(x1+l,y1,x2,y2-l);
    cut(x1,y1+l,x2-l,y2);
}