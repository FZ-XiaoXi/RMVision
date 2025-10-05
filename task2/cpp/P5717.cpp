#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    if(a+b<=c){
        cout<<"Not triangle";
        return 0;
    }
    if(c*c==a*a+b*b){
        cout<<"Right triangle";
    }else if(c*c<a*a+b*b){
        cout<<"Acute triangle";
    }else{
        cout<<"Obtuse triangle";
    }
    if(a==b || b==c){
        cout<<endl<<"Isosceles triangle";
    }
    if(a==b&&b==c){
        cout<<endl<<"Equilateral triangle";
    }
    return 0;
}