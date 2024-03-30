
// unique number of occurence

#include <iostream>
#include <algorithm>

using namespace std;

bool uniqueOccurrences(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);

    // Count occurrences and check for uniqueness
    int count = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            int j = i + 1;
            while (j < n && arr[j] == arr[i])
            {
                j++;
            }
            if (j - i != count)
            {
                return false;
            }
            count = 1;
        }
    }

    return true;
}

int main()
{
    int arr1[] = {1, 2, 2, 1, 1, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << boolalpha << uniqueOccurrences(arr1, n1) << endl; // Output: true

    int arr2[] = {1, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << boolalpha << uniqueOccurrences(arr2, n2) << endl; // Output: false

    int arr3[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << boolalpha << uniqueOccurrences(arr3, n3) << endl; // Output: true

    return 0;
}
