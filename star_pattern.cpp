// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int row , col;
    cout<<"Enter rows"<<endl;
    cin>>row;
    col = (2*row);
    for(int i=1; i<=col; i++){
        if(i<=col/2){
        for(int j= 1; j<=row + i - 1; j++){
            if(j<=row-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        }
        else{
              for(int j= 1; j<=col - (i -row) ; j++){
            if(j<i-row){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        }

        cout<<endl;
    }


    return 0;
}