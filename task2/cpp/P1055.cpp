#include<iostream>
using namespace std;
int main(void){
    char isbn[13];
    cin>>isbn;
    //cout<<isbn;
    int dec=0;
    //0-670-82162-4
    dec+=(isbn[0]-'0')*1;
    dec+=(isbn[2]-'0')*2;
    dec+=(isbn[3]-'0')*3;
    dec+=(isbn[4]-'0')*4;
    dec+=(isbn[6]-'0')*5;
    dec+=(isbn[7]-'0')*6;
    dec+=(isbn[8]-'0')*7;
    dec+=(isbn[9]-'0')*8;
    dec+=(isbn[10]-'0')*9;
    dec%=11;
    //cout<<"dec"<<dec<<endl;
    if(dec==10){
        if(isbn[12]=='X'){
            cout<<"Right";
            return 0;
        }else{
            isbn[12]='X';
            cout<<isbn;
            return 0;
        }
    }
    if(dec==(isbn[12]-'0')){
        cout<<"Right";
    }else{
        isbn[12]=(dec+'0');
        cout<<isbn;
    }
    return 0;
}
