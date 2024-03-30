#include <iostream>
using namespace std;

void swap(int arr[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}

int main(){

int arr[6]={2,43,54,12,43,6};
swap(arr,6);

for (int i = 0; i < 6; i++)
{
    cout << arr[i] << " ";
}

}