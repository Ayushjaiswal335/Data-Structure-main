#include <iostream>
using namespace std;

bool isPrime(int n){

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){

int n;
cout << "enter the number" << endl;

cin >> n;

if (isPrime(n))
{
    cout << " prime";
}
else
{
    cout << "not prime";
}



}