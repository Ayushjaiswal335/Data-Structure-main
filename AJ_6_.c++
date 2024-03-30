// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;

int main (){
int n;
cin>> n;
int ans=0;
int i=0; 

while (n!=0)
{
    int bit = n&1;
    ans = (bit * pow(10,i))+ans;

    n=n>> 1;
    i++;
}
cout << "Answer is " << ans << endl;
}


// #include <iostream>
//     #include <cmath>
//     using namespace std;
    
    
//     int powerOfTen(int exponent) {
//     int result = 1;
//     for (int i = 0; i < exponent; ++i) {
//         result *= 10;
//     }
//     return result;
//     }
//     int main()
//     {
//         int n;
//         cin >> n;
//         int i = 0;
//         int ans = 0;
    
//         while (n != 0)
//         {
//             int bit = n & 1;
//              ans = (bit * powerOfTen(i)) + ans;
//             n = n >> 1;
//             i++;
//         }
//         cout << ans;
//     }