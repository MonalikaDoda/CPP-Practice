#include <iostream>
using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i<size; i++){
        maxi = max(maxi, arr[i]);
    }
    cout<<endl;
    return maxi;     
}

int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i = 0; i<size; i++){
        mini = min(mini, arr[i]);
    }
    cout<<endl;
    return mini;     
}

int main(){
    int arr[] = {100,200,-4,0,2904,-199};
    cout<<getMin(arr, 6);
    cout<<getMax(arr, 6);
}