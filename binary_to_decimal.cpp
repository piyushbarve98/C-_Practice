#include <iostream>
using namespace std;

int main(){
    int n,base=1,decimal=0,rem;
    cout<<"Enter binary number"<<endl;
    cin>>n;
    int temp = n;
    while(temp){
        rem = temp% 10 ;
        temp = temp/10;
        decimal = decimal + rem * base;
        base = base * 2;
    }
    cout<<"The decimal of "<<n<< " is "<< decimal<<endl;
}