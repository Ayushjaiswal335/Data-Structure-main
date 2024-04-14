//  EKO SPOJ: https://www.spoj.com/problems/EKO/

// N (the number of trees)

#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> &arr, int n, int m, int mid)
{
	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		if (arr[i] > mid)
		{
			sum += arr[i] - mid;
		}
	}
	if (sum >= m)
	{
		return true;
	}
	return false;
}

int main()
{

	int n, m;
	cin >> n >> m;
	int maxi = 0;
	for (int i = 0; i < n; i++)
	{
		maxi = max(maxi, arr[i]);
	}
	int start = 0;
	int end = maxi;
	int ans = -1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		if (ispossible(arr, n, m, mid))
		{
			ans = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	cout << ans;

	return 0;
}
