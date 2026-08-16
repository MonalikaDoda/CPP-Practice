#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    if(linearSearch(arr, 5, key)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }
}