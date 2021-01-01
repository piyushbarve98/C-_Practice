#include <iostream>
using namespace std;

int main(){
    int n,count;
    cout<<"Enter N: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        count = 1;
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }
}