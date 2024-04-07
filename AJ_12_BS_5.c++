
// Square Root of an Integer

long long int binarySearch(int n)
{

        int start = 0;
        int end = n;
        long long mid = start + (end-start)/2;

        long long ans = -1;
        while (start <= end)
        {
                    long long int square = mid*mid;

                if (square == n)
                {
                        return mid;
                }
                if (square < n)
                {
                    ans =mid;
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                } 
                
                mid = start + (end-start)/2;
        }
        return ans;
}
int floorSqrt(int n)
{
    return binarySearch(n);
}