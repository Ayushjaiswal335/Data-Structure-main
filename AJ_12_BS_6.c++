#include <bits/stdc++.h> 

// book allocation problem

bool isPossible(int n, int m, vector<int> arr,int mid){
	int studentCount = 1;
	int pageSum = 0;

	for(int i=0;i<n; i++){
		if(pageSum + arr[i] <=mid)
		{
			pageSum+=arr[i];
		}
		else{
			studentCount++;
			if(studentCount > m || arr[i]>mid){
				return false;
			}
			pageSum = arr[i];
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> arr) 
{	
	int start  = 0;
	int sum = 0;
	
	for(int i = 0; i< n ; i++){
		sum +=arr[i];
	}
	int end = sum;
	int ans = -1;
	int mid = start+ (end-start)/2;

	while(start<=end){
		if(isPossible(n,m,arr,mid))
		{
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
		mid = start+ (end-start)/2;
	}
	return ans;
}