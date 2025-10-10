#include <iostream>
using namespace std;
int n;

int Rotate();
bool ifEqual();
char working[10][10];
char working2[10][10];
char tstart[10][10];
char tend[10][10];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)    cin>>tstart[i];
    for(int i=0;i<n;i++)    cin>>tend[i];
    int way=Rotate();
    if(way){
        cout<<way;
        return 0;
    }
    //4.LR
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            working[i][n-1-j]=tstart[i][j];
        }
        
    }
    if(ifEqual()==1){
        cout<<"4";
        return 0;
    }
    //5. CP
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            working[i][n-1-j]=tstart[i][j];
        }
    }
    while(1){
        //90
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    working2[j][n-1-i]=working[i][j];
                }
            }
            //for(int i=0;i<n;i++)    cout<<working[i]<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[i][j]=working2[i][j];
            }
        }
        if(ifEqual()==1){
            way=1;
            break;
        }
        //180
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    working2[n-1-i][n-1-j]=working[i][j];
                }
            }
            //for(int i=0;i<n;i++)    cout<<working[i]<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[i][j]=working2[i][j];
            }
        }
        if(ifEqual()==1){
            way=1;
            break;
        }
        //270
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    working2[n-1-j][i]=working[i][j];
                }
            }
            //for(int i=0;i<n;i++)    cout<<working[i]<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[i][j]=working2[i][j];
            }
        }
        if(ifEqual()==1){
            way=1;
            break;
        }
        way=0;
        break;
    }
    if(way){
        cout<<"5";
        return 0;
    }
    //6. O
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            working[i][j]=tstart[i][j];
        }
    }
    if(ifEqual()==1){
        cout<<"6";
        return 0;
    }
    //7. X
    cout<<"7";

    return 0;
}

int Rotate(){
    {//90
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[j][n-1-i]=tstart[i][j];
            }
        }
        //for(int i=0;i<n;i++)    cout<<working[i]<<endl;
    }
    if(ifEqual()==1) return 1;
    {//180
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[n-1-i][n-1-j]=tstart[i][j];
            }
        }
        //for(int i=0;i<n;i++)    cout<<working[i]<<endl;
    }
    if(ifEqual()==1) return 2;
    {//270
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                working[n-1-j][i]=tstart[i][j];
            }
        }
        //for(int i=0;i<n;i++)    cout<<working[i]<<endl;

    }
    if(ifEqual()==1) return 3;
    return 0;
}
bool ifEqual(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(working[i][j]!=tend[i][j]){
                return 0;
            }
        }
    }
    return 1;
}