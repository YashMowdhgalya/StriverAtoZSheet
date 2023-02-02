#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int largest = INT32_MIN;
    int secondLargest = INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) secondLargest = arr[i];
    }
    cout << "Second Largest Element is " << secondLargest;
    return 0;
}