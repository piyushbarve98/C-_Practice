#include <iostream>
using namespace std;

int main(){
    //in this program we will check whether a program is prime or not
    int n,i;
    cout<<"Enter number which you want to check prime or not"<<endl;
    cin>>n;
    for(i=2; i<n ; i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}