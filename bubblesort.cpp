#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i=0;
			}
		}
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
	//bubble sort;
     bubble(arr,n);
}