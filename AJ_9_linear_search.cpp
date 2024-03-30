#include <iostream>
using namespace std;

bool search(int arr[] ,int n,int key){

    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            return 1;
        }
        
    }
    return 0;

}

int main(){

int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
// finding 22 in array is present or not.
int key;
cout <<"ENter the key elemeny to search " << endl;
cin >> key;

bool found=search(arr,10,key);

if (found)
{
    cout << "key is present" << endl;
}
else
{
    cout << "key element is not present";
}

}