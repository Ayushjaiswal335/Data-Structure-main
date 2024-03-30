#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
int product=1;
int sum=0;
while (n>0)
{
    int reminder = n%10;
    product=product*reminder;
    sum=sum +reminder;
    n=n/10;
}
int result= product- sum;
cout << result << endl;


}