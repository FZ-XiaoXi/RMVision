#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    char s[4];
    cin>>a>>b>>c;
    cin>>s;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    for(int i=0;i<=2;i++){
        switch(s[i]){
            case 'A':
                cout<<a<<" ";break;
            case 'B':
                cout<<b<<" ";break;
            case 'C':
                cout<<c<<" ";break;
        }
    }
    return 0;
}