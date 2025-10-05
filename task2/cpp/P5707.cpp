#include<iostream>
using namespace std;
int main(void){
    double s,v;
 	cin>>s>>v;
    double time;
    time=s/v;
    int mins;
    if((time-(int)time)>0){
        mins=(int)time+1;
    }else{
        mins=(int)time;
    }
    mins+=10;
    if(mins>=24*60){
        cout<<"08:00";
        return 0;
    }
    int h;
    h=mins/60;
    mins=mins-h*60;
    int hour,min;
    if(h<8){
        hour=8-h;
        min=60-mins;
        if(mins!=0) hour--;
    }else{
        h-=8;
        hour=24-h;
        min=60-mins;
        if(mins!=0) hour--;
    }
    if(hour==24) hour=0;
    if(min==60) min=0;
    if(hour<10) cout<<"0";
    cout<<hour<<":";
    if(min<10) cout<<"0";
    cout<<min;
    return 0;
}
