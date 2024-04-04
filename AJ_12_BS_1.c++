#include <iostream>
using namespace std;

int firstOcc(int even[] , int n,int key){
        int s=0,e=n-1;
        int mid = s +(e-s)/2;
        int ans =-1;
        while (s<=e)
        {
                if (even[mid]==key)
                {
                        ans=mid;
                        e=mid-1;
                }
                else if (key > even[mid])
                {
                        s=mid+1;
                }
                else if (key < even[mid])
                {
                        e = mid-1;
                }
                mid = s +(e-s)/2;
        }
        return ans;
        
}
int lastOcc(int even[] , int n,int key){
        int s=0,e=n-1;
        int mid = s +(e-s)/2;
        int ans =-1;
        while (s<=e)
        {
                if (even[mid]==key)
                {
                        ans=mid;
                        s=mid+1;
                }
                else if (key > even[mid])
                {
                        s=mid+1;
                }
                else if (key < even[mid])
                {
                        e = mid-1;
                }
                mid = s +(e-s)/2;
        }
        return ans;
        
}

int main(){

        int even[10]={1,2,3,3,3,3,3,3,3,5};
        cout << "the index of first occurence of 3 is " <<  firstOcc(even,10,3) << endl;
        cout << "the index of last occurence of 3 is " <<  lastOcc(even,10,3) << endl;

        // total number of occurence
        cout << "total number of occurence of 3 is" << (lastOcc(even,10,3)-firstOcc(even,10,3))+1;

}