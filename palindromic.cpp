#include <iostream>
using namespace std;

int main(){
    int n,count1,col;
    cout<<"Enter n: "<<endl;
    cin>>n;
    col= (2*n)-1;
    for(int i=1; i<=n ; i++){
             count1=i;
        for(int j=1; j<=n; j++){

            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<count1;
                count1--;
            }
        }
        if(i!=1){
            for(int k=2; k<=i ; k++){

            cout<<k;
            
        }

        }

        cout<<endl;

    }
}