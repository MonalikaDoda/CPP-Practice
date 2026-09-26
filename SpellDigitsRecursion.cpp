#include <iostream>
using namespace std;

void spellDigits(int num, string arr[]){
    if(num==0)
    return;

    int n = num%10;
    num = num/10;

    spellDigits(num, arr);
    cout<<arr[n]<<" ";
}

int main(){
    int n;
    cin>>n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    spellDigits(n, arr);

    return 0;
}