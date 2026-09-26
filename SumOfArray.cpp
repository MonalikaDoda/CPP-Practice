#include <iostream>
using namespace std;

// int sum(int arr[], int size){
//     int sum = 0;
//     int i = 0;
//     while(i<size){
//         sum = sum + arr[i];
//         i++;
//     }
//     return sum;
// }

// int main(){
//     int array[] = {10,20,30,40};
//     cout<<sum(array, 4);
// }






// Using recursion

int sum(int arr[], int size){
    if(size==0){
        return 0;
    }
    return arr[0] + sum(arr +1, size-1);
}

int main(){
    int array[] = {10,20,30,40};
    cout<<sum(array, 4);
} 