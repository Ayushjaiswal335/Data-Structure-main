#include <iostream>
using namespace std;

void reverseAlternet(int arr[],int size){

for (int i = 1; i < size; i=i+2)
{
      if (i + 1 < n){
        swap(arr[i],arr[i+1]);
      }
}
// void reverse(int arr[], int n)
// {

//     int temp;

//     for (int i = 0; i < n; i = i + 2)
//     {
//         if (i + 1 < n)
//         {

//             temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//     }
// }

}
void printarr(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{

    int arr[9] = {12, 4, 54, 6, 61, 21, 7, 8, 9};

    reverseAlternet(arr, 9);
    printarr(arr,9);
    
}