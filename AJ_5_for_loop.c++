#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     
    // }
    // int i=1;
    // for ( ; ; )
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // Fibonacci Series
    // int a=0;
    // int b=1;

    // cout << a <<" "<< b << " ";
    // for (int i = 0; i <=n; i++)
    // {
    //     int nextNumber = a+b;
    //     cout << nextNumber << " ";
    //     a=b;
    //     b=nextNumber ;
    // }

    // Prime Number 1
    // bool isPrime =1;
    // for (int  i = 2; i < n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         isPrime =0;
    //         break;
    //     }
        
    // }
    // if (isPrime==0)
    // {
    //     cout << " not a prime number" << endl;
    // }
    // else{
    //     cout << " prime number";
    // }

    // Prime Number 2
    // int count =0;
    // for (int i = 1; i <=n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         count++;
    //     }
        
    // }
    // if (count==2)
    // {
    //     cout << " a prime number";
    // }
    // else{
    //     cout << " not a prime number";
    // }

    
    // for (int i = 2; i <=15; i+=2)
    // {
    //     cout << i << " ";
    //     if (i&1)
    //     {
    //         continue;
    //     }
        
    //     i++;
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <=5; j++)
    //     {
    //         if (i+j==10)
    //         {
    //             break;
    //         }
            
    //         cout<< i << " " << j;
    //     }
        
    // }
    
    int n;
    cin >> n;
    int prodoct=1;
    int sum =0;
    
    while (n!=0)
    {
        int rem = n%10;
        prodoct=prodoct*rem;
        sum=sum+rem;

        n=n/10;
        
    }
    int subtract = prodoct-sum;
    cout << subtract;
    
     
    
    
          

}