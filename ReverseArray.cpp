#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    int array1[5] = {1,2,3,4,5};
    int array2[6] = {1,2,3,4,5,6};

    reverseArray(array1, 5);
    reverseArray(array2, 6);

    printArray(array1, 5);
    printArray(array2, 6);
}