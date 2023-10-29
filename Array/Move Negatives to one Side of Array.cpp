// File Name: Move Negatives to one Side of Array.cpp
// Date: 2023-10-28
// Time: 04:01:47

#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] < 0)
            left++;
        else if (arr[left] > 0 && arr[right] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }

        else if (arr[right] > 0)
            right--;
    }
}
int main()
{

    int arr[] = {-1,2,-2,0};
    int n = sizeof(arr) / sizeof(arr[0]);


    rearrange(arr, n);


    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
