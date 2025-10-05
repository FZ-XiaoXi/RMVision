#include <iostream>
using namespace std;
class pen{
public:
    int quantity;
    int price;
};
int main(void){
    pen pen[3];
    int s[3];
    int n,low;
    cin>>n;
    for(int i=0;i<=2;i++){
        cin>>pen[i].quantity>>pen[i].price;
    }
    for(int i=0;i<=2;i++){
        if(n%pen[i].quantity){
            s[i]=(n/pen[i].quantity+1)*pen[i].price;
        }else{
            s[i]=n/pen[i].quantity*pen[i].price;
        }
    }
    low=s[0];
    if(s[1]<low) low=s[1];
    if(s[2]<low) low=s[2];
    cout<<low;
    return 0;
}