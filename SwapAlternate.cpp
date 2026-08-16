#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array1[] = {100,200,300,400};
    int array2[] = {100,200,300,400,500,600,700};

    swapAlternate(array1, 4);
    swapAlternate(array2, 7);

    printArray(array1, 4);
    printArray(array2, 7);
}