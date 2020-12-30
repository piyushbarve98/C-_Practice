#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a for fight \nEnter b for run away \nEnter c for negotiation\n";
    cin>>button;

    switch(button){
        case 'a':
            cout<<"Great you won the fight"<<endl;
            break;

        case 'b':
            cout<<"Great you are out of danger now"<<endl;
            break;

        case 'c':
            cout<<"Great the matter is settled now"<<endl;
            break;

        default:
            cout<<"Sorry you lost the battle"<<endl;
    }

    cout<<"Program closed"<<endl;
}