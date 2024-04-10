#include <bits/stdc++.h> 

// book allocation problem

bool isPossible(int n, int m, vector<int> time,int mid){
	int studentCount = 1;
	int pageSum = 0;

	for(int i=0;i<n; i++){
		if(pageSum + time[i] <=mid)
		{
			pageSum+=time[i];
		}
		else{
			studentCount++;
			if(studentCount > m || time[i]>mid){
				return false;
			}
			pageSum = time[mid];
		}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int start  = 0;
	int sum = 0;
	
	for(int i = 0; i< n ; i++){
		sum +=time[i];
	}
	int end = sum;
	int ans = -1;
	int mid = start+ (end-start)/2;

	while(start<=end){
		if(isPossible(n,m,time,mid))
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