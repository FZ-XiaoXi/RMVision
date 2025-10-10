#include<iostream>
using namespace std;
#define MAX 100
int n;
int S[MAX],t[MAX],c1[MAX];
//
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
    int tinA[MAX],tinB[MAX];
    for(int i=0;i<MAX;i++) tinA[i]=inA[i];
    for(int i=0;i<MAX;i++) tinB[i]=inB[i];
    inA = tinA;
    inB = tinB;
    int toutput[MAX];
    for(int i=0;i<MAX;i++) toutput[i]=0;
    //1for(int i=0;i<MAX;i++) output[i]=0;
    for(int i=MAX-1;i>=0;i--){
        int temp[MAX],ifCarry=0;
        for(int e=0;e<MAX;e++) temp[e]=0;
        for(int j=MAX-1;j>=0;j--){
            if((i-(MAX-j-1))<0){
                ifCarry=0;
                break;
            }
            int t=inB[i]*inA[j];
            t+=ifCarry;
            //cout<<"inB[i]=inB["<<i<<"]="<<inB[i]<<" inA[j]=inA["<<j<<"]="<<inA[j]<<" t="<<t<<" Carry="<<ifCarry<<endl;
            //cout<<"A"<<inA[j]<<"B"<<inB[i]<<"S"<<t<<endl;
            temp[i-(MAX-j-1)]=t%10;
            ifCarry=t/10;
        }
        //cout<<endl;
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

void fac(int* output,int x){//output=!x
    for(int i=0;i<MAX;i++) output[i]=0;
    output[MAX-1]=1;  // 从1开始
    int k[MAX];
    for(int i=0;i<MAX;i++) k[i]=0;
    k[MAX-1]=1;
    for(int i=1;i<=x;i++){
        mul(output,output,k);//mul(output,k,output);
        // if(i==10){
        //     output[MAX-7]=3;
        //     output[MAX-6]=6;
        //     output[MAX-5]=2;
        //     output[MAX-4]=8;
        //     output[MAX-3]=8;
        //     output[MAX-2]=0;
        //     output[MAX-1]=0;
        // }
        add(k,k,c1);//k++
    }
}

int main() {
    // int S[]={0,0,0,0,0,0,0,0,5,5},cA[]={0,0,0,0,0,0,0,9,5,5},cB[MAX];
    // //for(int i=0;i<MAX;i++) cA[i]=0;
    // for(int i=0;i<MAX;i++) cB[i]=0;
    // mul(cB,cA,S);
    // for(int i=0;i<MAX;i++){
    //     cout<<cB[i];
    // }
    c1[MAX-1]=1;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int i=0;i<MAX;i++) t[i]=0;
        t[MAX-1]=1;
        fac(t,i);
        // cout<<i<<"!=";
        // for(int i=0;i<MAX;i++) cout<<t[i];
        // cout<<endl;
        add(S,S,t);
    }
    // fac(t,n);
    int i;
    for(i=0;S[i]==0;i++){
        //cout<<S[i];
    }
    for(;i<MAX;i++){
        cout<<S[i];
    }
    return 0;
}