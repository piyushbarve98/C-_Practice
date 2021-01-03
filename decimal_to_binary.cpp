#include <iostream>
using namespace std;

int main(){
    int n,rem,arr[32],i=0;
    cout<<"Enter decimal number"<<endl;
    cin>>n;
    while(n){
        rem = n % 2;
        n= n/2;
        arr[i] = rem;
        i++;
    }

    for(int j=i-1 ; j>0 ; j--){
        cout<<arr[j];
    }

cout<<endl;
}