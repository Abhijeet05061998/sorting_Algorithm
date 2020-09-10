#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int n,int low,int high)
{
	int pivot=arr[low],count=0;
	for(int i=1;i<=high;i++)
	{
		if(arr[i]<pivot)
		{
			count++;
		}
	}

	int pivotindex=low+count;
	swap(arr[low],arr[pivotindex]);
    int i=low;
    int j=high;
    while(i<pivotindex&&j>pivotindex)
    {
    	if(arr[i]<=pivot)
    	{
    		i++;
    	}
    	else if(arr[j]>=pivot)
    	{
    		j--;
    	}
    	else 
    	{

    		swap(arr[i],arr[j]);
    	}
    }
    return pivotindex;
	
}

void quick(int arr[],int n,int low,int high)
{
	if(low>=high)
	{
		return;
	}
	int p=partition(arr,n,low,high);
		quick(arr,n,low,p-1);
		quick(arr,n,p+1,high);
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
	int low=0,high=n-1;

	quick(arr,n,low,high);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}