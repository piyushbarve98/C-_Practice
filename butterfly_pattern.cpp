#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: "<<endl;
    cin>>n;
    n = n*2;
    for(int i=1; i<=n; i++){
        if(i<=n/2){
        for(int j=1; j<=n ; j++){
            if(j<=i || j>=n + 1 -i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        }
        else{
           for(int j=1; j<=n ; j++){
            if(j>=i || j<=n + 1 -i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;  
        }    
        
        
    }
}