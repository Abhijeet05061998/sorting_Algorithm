#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[min]>arr[j])
		{
			min=j;
		}
	}
	int temp=arr[min];
	arr[min]=arr[i];
	arr[i]=temp;
    }

    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
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

	selection_sort(arr,n);
}