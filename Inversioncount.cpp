// Definition: A pair of array indices (i, j) forms an inversion if i < j and arr[i] > arr[j]
// Using merge sort 

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int s, int e){
    int mid = s + (e-s)/2;

    int i = s;
    int j = mid+1;
    vector<int> temp;

    int count = 0;

    while(i<=mid && j<=e){
        if(arr[i]>arr[j]){
            count += mid - i + 1;
            temp.push_back(arr[j++]);
        } else{
            temp.push_back(arr[i++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

     while(j <= e){
        temp.push_back(arr[j++]);
    }

    for(int k = 0; k < temp.size(); k++){
        arr[s+k] = temp[k];
    }

    return count;
}

int inversionCount(vector<int> &arr, int s, int e){
    if(s>=e)
    return 0;

    int mid = s + (e-s)/2;

    int count = 0;

    count += inversionCount(arr, s, mid);
    count += inversionCount(arr, mid+1, e);
    count += merge(arr, s, e);

    return count;
}

int main() {
    vector<int> arr = {5, 3, 2, 4, 1};

    cout << inversionCount(arr, 0, arr.size() - 1);

    return 0;
}