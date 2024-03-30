#include <iostream>
using namespace std;

int main(){

// int n,a;
// cout << " Enter the value of n "<< endl;
// cin >> n;

// if (n>0)
// {
//     cout << "positive number"<< endl;
// }
// else
// {
//     cout << "negative number";
// }
// int a = 2;
// int b = a+1;
// if ((a=3)==b)
// {
//     cout << a<< endl;
// }

// else{
//     cout << a+1;
// }

char ch;
cout << "enter the chracter"<< endl;
cin>>ch;

if (ch >= 'a' && ch<='z')
{
    cout << " lower case"<< endl;
}
else if (ch>= 'A' && ch<='Z')
{
    cout << " upper case"<< endl;
}
else{
    cout << " numeric and character";
}

}