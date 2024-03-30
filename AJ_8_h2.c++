#include <iostream>
using namespace std;

int setbit(int n){

int count=0;
while (n!=0)
{
    if (n&1)
    {
        count++;
    }
    n=n >> 1;
}
return count;
}
int main(){
int a,b;

cout << "enter the numb a"<< endl;
cin>> a;
cout << "enter the numb a" << endl;
cin >> b;

int result=setbit(a) + setbit(b);

cout << result;
}