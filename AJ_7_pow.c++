#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= 31; i++)
    {
        int po = pow(2, i);
        if (po == n)
        {
            cout << "true";
            break;
        }
    }
    cout << " false";
}