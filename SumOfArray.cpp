#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    int i = 0;
    while(i<size){
        sum = sum + arr[i];
        i++;
    }
    return sum;
}

int main(){
    int array[] = {10,20,30,40};
    cout<<sum(array, 4);
}
