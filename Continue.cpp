#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(i=1; i<=n; i++ ){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    cout<<"Program Ends"<<endl;
}