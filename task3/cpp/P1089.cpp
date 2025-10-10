#include<iostream>
using namespace std;
int main(){
    int price[13];
    int money=0;
    int bank=0;
    for(int i=1;i<=12;i++){
        cin>>price[i];
        money+=300;
        money-=price[i];
        if(money<0){
            cout<<"-"<<i;
            return 0;
        }else{
            bank+=(money/100*100);
            money-=(money/100*100);
        }
    }
    money+=1.2*bank;
    cout<<money;
    return 0;
}