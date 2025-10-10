#include<iostream>
#include<math.h>
using namespace std;
double score[100][20];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>score[i][j];
        }
        double sh=-1,sl=11;
        int shj=-1,slj=-1;
        for(int j=0;j<m;j++){
            if(score[i][j]>sh){
                sh=score[i][j];
                shj=j;
            }
            if(score[i][j]<sl){
                sl=score[i][j];
                slj=j;
            }
        }
        score[i][slj]=0;
        score[i][shj]=0;
        double add=0;
        for(int j=0;j<m;j++){
            add+=score[i][j];
        }
        add/=m-2;
        score[i][0]=add;
        //cout<<"SC"<<add<<" "<<sh<<" "<<sl<<endl;
    }
    double first=-1;
    for(int i=0;i<n;i++){
        if(score[i][0]>first){
            first=score[i][0];
        }
    }
    printf("%.2f",first);
    return 0;
}
