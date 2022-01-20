#include<iostream>
using namespace std;

int main(){
    int matrix[4][3]={{4,10,3},{9,15,2},{5,4,7},{3,8,5}};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
        cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
return 0;
}