#include <iostream>
using namespace std;

int main(){
    int num1 , num2;
    char op;
    cout<<"Enter the operator ie.(+,-,/,*,%)"<<endl;
    cin>>op;
    cout<<"Enter both numbers with space between them"<<endl;
    cin>>num1>>num2;

    switch(op){

        case '+':
            cout<<"Answer: " <<num1+num2<<endl;
            break;

        case '-':
            cout<<"Answer: " <<num1-num2<<endl;
            break;

        case '/':
            cout<<"Answer: " <<num1/num2<<endl;
            break;

        case '*':
            cout<<"Answer: " <<num1*num2<<endl;
            break;

        case '%':
            cout<<"Answer: " <<num1%num2<<endl;
            break;

        default:
            cout<<"Invalid Input"<<endl;
    }

    cout<<"Program Closed"<<endl;

}