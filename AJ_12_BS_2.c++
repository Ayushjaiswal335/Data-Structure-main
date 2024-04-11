#include <iostream>
using namespace std;

// find the peek of an sorted array

int binarySearch(int arr[], int size)
{

        int start = 0;
        int end = size - 1;
        // int mid = (start + end) / 2;
        int mid = start + (end-start)/2;

        while (start < end)
        {
                if (arr[mid] <= arr[mid+1])
                {
                        start=mid+1;
                }
                
                else
                {
                        end = mid ;
                } 
                // mid = (start + end) / 2;
                mid = start + (end-start)/2;
        }
        return start;
}

int main()
{

        int even[8] = {2, 4, 6, 8, 12, 18,4,3};
        // int odd[5] = {1, 4, 8, 13, 25};

        int result = binarySearch(even, 8);
        cout << "Index of 18 is " << result;
         
        return 0 ;
}