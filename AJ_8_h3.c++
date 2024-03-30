#include <iostream>
using namespace std;
int fibbo(int n){
    if (n==1)
    {
        return 0;
    }
    
    if (n==2 )
    {
        return 1;
    }

    int fib=fibbo(n-1)+fibbo(n-2);
    return fib;
    
}
int main(){
int n;
cout << "enter the nth number you want"<< endl;
cin >> n;

int result=fibbo(n);
cout << result;

}