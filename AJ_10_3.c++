#include <iostream>
using namespace std;
// find dublicate number in an array.
void reverse(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] == arr[i - 1])
    {
      cout << arr[i] << endl;
    }
  }
}

int main()
{

  int arr[7] = {1, 2, 3, 4, 4, 5, 5};

  reverse(arr, 7);
}