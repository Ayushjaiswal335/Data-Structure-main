#include<iostream>
using namespace std;

int main(){
int n;
cin>> n;
int count=0;
int i=1;
while (i<=n)
{
    if (n%i==0)
    {
        count++;
    }
    i++;
}
if (count==2)
{
    cout<< n << " is the prime number";
}
else{
    cout << "is not the prime number";
}

// int i =2;
// while (i<n)
// {
//     if (n%i==0)
//     {
//         cout << "not prime"<<endl;
//     }
//     else{
//         cout << "prime"<<endl;
//     }
//     i++;
// }
 
}