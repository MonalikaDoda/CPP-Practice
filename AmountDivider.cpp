#include <iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount : ";
    cin>>amount;

    int note = 100;

    switch(note){
        case 100: note = amount/100;
        cout<<"Number of 100 rs notes - " <<note<<endl;
        amount = amount%100;
        note = 50;

        case 50: note = amount/50;
        cout<<"Number of 50 rs notes - " <<note<<endl;
        amount = amount%50;
        note = 20;

        case 20: note = amount/20;
        cout<<"Number of 20 rs notes - " <<note<<endl;
        amount = amount%20;
        note = 1;

        case 1: note = amount/1;
        cout<<"Number of 1 rs notes - " <<note<<endl;
        amount = amount%1;
        break;
    }
}