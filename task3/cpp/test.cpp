#include <iostream>
using namespace std;
#define MAX 10

int* add(int* output,int* inA,int* inB){
    bool ifCarry=0;
    for(int i=MAX-1;i>=0;i--){
        int s=inA[i]+inB[i];
        if(ifCarry){
            s++;
            ifCarry=0;
        }
        if(s>=10){
            ifCarry=1;
            s-=10;
        }
        output[i]=s;
    }
    return output;
}

int* mul(int* output,int* inA,int* inB){
    cout<<" ";
    for(int i=0;i<MAX;i++) cout<<inA[i];
    cout<<endl<<"x";
    for(int i=0;i<MAX;i++) cout<<inB[i];
    cout<<endl<<"--------------------------"<<endl;
    
    int toutput[MAX];
    for(int i=0;i<MAX;i++) toutput[i]=0;
    //1for(int i=0;i<MAX;i++) output[i]=0;
    for(int i=MAX-1;i>=0;i--){
        int temp[MAX],ifCarry=0;
        for(int i=0;i<MAX;i++) temp[i]=0;
        for(int j=MAX-1;j>=0;j--){
            if((i-(MAX-j-1))<0){
                continue;
            }
            int t=inB[i]*inA[j];
            t+=ifCarry;
            //cout<<"A"<<inA[j]<<"B"<<inB[i]<<"S"<<t<<endl;
            temp[i-(MAX-j-1)]=t%10;
            ifCarry=t/10;
        }
        cout<<" ";
        for(int i=0;i<MAX;i++) cout<<temp[i];
        cout<<endl;
        // for(int i=0;i<MAX;i++){
        //     cout<<" "<<output[i];
        // }cout<<endl;
        // cout<<"    temp=";
        // for(int i=0;i<MAX;i++) cout<<temp[i];
        // cout<<endl;
        add(toutput,toutput,temp);
        for(int i=0;i<MAX;i++) output[i]=toutput[i];
    }
    return output;
}
int main(){
    // int O[MAX];
    // int A[]={0,0,0,0,3,6,2,8,8,0};
    // int B[]={0,0,0,0,0,0,0,0,1,0};
    // mul(O,A,B);
    // for(int i=0;i<MAX;i++) cout<<O[i];

    int O[MAX];
    int A[]={0,0,0,0,0,6,0,6,6,5};
    int B[]={0,0,0,0,0,0,6,0,1,0};
    mul(O,A,B);
    cout<<"-------------------------"<<endl<<" ";
    for(int i=0;i<MAX;i++) cout<<O[i];
    return 0;
}