#include <iostream>
using namespace std;

int main(){
    int row, column;
    cout<<"Enter rows and column of the pattern"<<endl;
    cin>>row>>column;
    for(int i = 0; i<row; i++){
        for(int j =0; j<column; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Program Ended"<<endl;
}