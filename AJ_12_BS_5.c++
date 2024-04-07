#include <iostream>
using namespace std;
// Square Root of an Integer

long long int sqrtInteger(int n)
{

        int start = 0;
        int end = n;
        long long mid = start + (end - start) / 2;

        long long ans = -1;
        while (start <= end)
        {
                long long int square = mid * mid;

                if (square == n)
                {
                        return mid;
                }
                if (square < n)
                {
                        ans = mid;
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }

                mid = start + (end - start) / 2;
        }
        return ans;
}

double morePrecision(int n,int precision,int tempsol){

        double factor= 1;
        double ans = tempsol;

        for (int i = 0; i < precision; i++)
        {
                factor = factor/10;

                for (double j = ans; j*j < n; j=j+factor)
                {
                        ans = j;
                }
        }
        return ans;
}

int main(){
        int n;
        cout << "Enter your number" << endl;

        cin >> n;

        int tempsol = sqrtInteger(n);
        // cout << tempsol; 

        cout << "Anser is " << morePrecision(n , 3 ,tempsol) << endl;
}