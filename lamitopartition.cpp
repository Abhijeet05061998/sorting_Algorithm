#include<bits/stdc++.h>
using namespace std;


int lamito(int arr[],int n)
{
	int l=0,r=n-1;
	int pivot=arr[r];

	int i=l-1;
	for(int j=l;j<r-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<lamito(arr,n);

	
}