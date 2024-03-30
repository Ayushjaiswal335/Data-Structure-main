int count=0;
int i=1;
while (i<=n)
{
    if (n%i==0)
    {
        count++;
    }
    i++;
}
if (count==2)
{
    cout<< n << " is the prime number";
}
else{
    cout << "is not the prime number";
}