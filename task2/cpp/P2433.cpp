#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int T;
    cin>>T;
    switch(T){
        case 1:{
            cout<<"I love Luogu!";break;}
        case 2:{
            cout<<"6 4";break;}
        case 3:{
            cout<<"3\n12\n2";break;}
        case 4:{
            cout<<"166.667";break;}
        case 5:{
            cout<<(260+220)/(12+20);break;}
        case 6:{
            double a=6,b=9;
            double c=sqrt(a*a+b*b);
            cout<<c;break;}
        case 7:{
            int a7=100;
            a7+=10;
            cout<<a7<<endl;
            a7-=20;
            cout<<a7<<endl;
            a7=0;
            cout<<a7;break;}
        case 8:{
            int r=5;
            double pi=3.141593;
            cout<<2*pi*r<<endl;
            cout<<r*r*pi<<endl;
            cout<<4.0/3*pi*r*r*r<<endl;break;}
        case 9:{
            cout<<(((1+1)*2+1)*2+1)*2<<endl;break;}
        case 10:{
            cout<<"9"<<endl;break;}
        case 11:{
            cout<<100.0/(8-5)<<endl;break;}
        case 12:{
            cout<<'M'-'A'+1<<endl;
            cout<<char('A'-1+18)<<endl;break;}
        case 13:{
            int r1=4,r2=10;
            double pi13=3.141593;
            double v=4.0/3*pi13*r1*r1*r1+4.0/3*pi13*r2*r2*r2;
            v=pow(v,1.0/3);
            printf("%.0lf\n",v);break;}
        case 14:{
            cout<<"50"<<endl;break;}
    }
    return 0;
}