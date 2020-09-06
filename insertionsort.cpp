#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int ans=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>ans)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=ans;
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

	insertion(arr,n);
}