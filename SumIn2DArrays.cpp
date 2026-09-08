#include <iostream>
#include <climits>
using namespace std;

// Function to calculate the sum of row in a 2D array
void sumOfRow(int arr[][3])
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

// Function to find which row has the largest sum
int largestRowSum(int arr[][3])
{
    int maxi = INT_MIN;
    int index = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = row;
        }
    }
    cout << "The maximum sum is " << maxi << " in " << index << " row" << endl;
}

int main()
{
    int arr[3][3];

    cout << "Enter the elements of 2-D array : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the array : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }
    cout << "The sum of all rows of array is " << endl;
    sumOfRow(arr);
    cout << largestRowSum(arr);
}