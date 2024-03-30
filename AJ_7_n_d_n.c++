#include <iostream>
    #include <math.h>
    using namespace std;
    
    void find (int ans){

        int a=0;
        int i=0;
        while (ans !=0)
        {
            
        int rem=ans%10;
        if (rem==0)
        {
            a=a+ pow(2,i);
        }
        ans=ans/10;
        i++;
        }
        cout << a;

    }
    
    int powerOfTen(int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }
    return result;
}
    int main()
    {
        int n;
        cin >> n;
        int i = 0;
        int ans = 0;
    
        while (n != 0)
        {
            int bit = n & 1;
             ans = (bit * powerOfTen(i)) + ans;
            n = n >> 1;
            i++;
        } 
        find(ans);
    }