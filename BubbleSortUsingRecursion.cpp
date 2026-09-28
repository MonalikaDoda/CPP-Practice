#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size){
    if(size==0 || size==1){
        return;
    }

    for(int i = 0; i<size; i++){
        if(arr[i]>arr[i+1])
        swap(arr[i], arr[i+1]);
    }

    bubbleSort(arr, size-1);
    
}

int main(){
    int arr[6] = {2,47,122,45,1,10};

    bubbleSort(arr, 6);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}