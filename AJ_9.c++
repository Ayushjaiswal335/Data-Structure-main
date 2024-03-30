#include <iostream>
using namespace std;

int getMax(int num[], int n)
{

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{

    // int num[8]={32,4,54,32,54,43,5,2};
    // int n[15];
    // cout << n[14] << endl;
    // for (int i = 0; i <8 ; i++)
    // {
    //     cout << num[i] << " ";
    // }

    // find Max and min in array

    int size;
    cout << "enter the length of the array" << endl;
    cin >> size;

    int num[100];

    cout << "enter tha value of array" << endl;;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "maximum value is " << getMax(num,size) <<endl;
    cout << "minimum value is " << getMin(num,size);
}