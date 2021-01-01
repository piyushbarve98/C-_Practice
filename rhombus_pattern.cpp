#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter rows: "<<endl;
    cin>>row;
    col= (2* row) - 1;
    for(int i=0; i<row; i++){
        for(int j =1; j<=col-i; j++){
            if(j<=col-row-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}