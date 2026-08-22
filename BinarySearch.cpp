#include <iostream>
using namespace std;

// Works only on sorted arrays
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int odd[7] = {0, 1, 9, 22, 28, 34, 57};
    int even[4] = {3, 38, 82, 795};
    int ans = binarySearch(odd, 7, 29);
    cout<<ans;
}