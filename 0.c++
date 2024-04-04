#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
                if (arr[mid] == k)
                {
                        ans = mid;
                        e = mid - 1;
                }
                else if (k > arr[mid])
                {
                        s = mid + 1;
                }
                else if (k < arr[mid])
                {
                        e = mid - 1;
                }
                mid = s + (e - s) / 2;
        }
        return ans;
}
int lastOcc(int arr[], int n, int k)
{
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
                if (arr[mid] == k)
                {
                        ans = mid;
                        s = mid + 1;
                }
                else if (k > arr[mid])
                {
                        s = mid + 1;
                }
                else if (k < arr[mid])
                {
                        e = mid - 1;
                }
                mid = s + (e - s) / 2;
        }
        return ans;
}

int main()
{

        int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};
        cout << "the index of first occurence of 3 is " << firstOcc(even, 10, 3) << endl;
        cout << "the index of last occurence of 3 is " <<  lastOcc(even,10,3) << endl;
}