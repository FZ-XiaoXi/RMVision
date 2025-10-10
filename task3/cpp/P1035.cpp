#include<iostream>
using namespace std;
int main() {
    int k,n=1;
    cin>>k;
    double Sn;
    for(Sn=0;Sn<=k;n++)
    {
        Sn+=1.0/n;
    }
    n--;
    cout<<n;
    return 0;
}
