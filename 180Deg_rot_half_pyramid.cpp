#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: "<<endl;
    cin>>n;
    for(int i=1; i<=n ; i++ ){
        for(int j=1; j<=n; j++){
            if(j<n + 1 -i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<"Program closed"<<endl;
}