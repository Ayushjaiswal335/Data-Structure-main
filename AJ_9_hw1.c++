#include <iostream>
using namespace std;
int sum(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}

int main()
{

    int num[5] = {2, 7, 1, -4, 11};

    int result = sum(num, 5);

    cout << result;
}