#include <iostream>
using namespace std;

int main(){
    int n,val;
    cout<<"Enter n: "<<endl;
    cin>>n;
    for(int i=1 ;i<=n; i++){
        val = i%2==0?0:1;
        for(int j=1; j<=i; j++){
            cout<<val<<" ";
            val = val?0:1;
        }
        cout<<endl;
    }
}