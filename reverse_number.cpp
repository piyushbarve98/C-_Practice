#include <iostream>
using namespace std;

int main(){
    int n,rem;
    cout<<"Enter an integer"<<endl;
    cin>>n;
    while(n){
        rem = n % 10;
        n= n/10;
        cout<<rem;
    }
    cout<<endl<<"Program finished"<<endl;
}