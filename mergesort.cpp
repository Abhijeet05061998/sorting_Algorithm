#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int n,int first,int last)
{
	int mid=first+(last-first)/2;

	int *output=new int[n];
	int i=first,j=mid+1,k=0;

	while(i<=mid&&j<=last)
	{
		if(arr[i]<arr[j])
		{
			output[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			output[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		output[k]=arr[i];
		k++;
		i++;
	}
	while(j<=last)
	{
		output[k]=arr[j];
		k++;
		j++;
	}

	int m=0;
	for(int i=first;i<=last;i++)
	{
		arr[i]=output[m];
		m++;
	}
	delete [] output;
}

void mergesort(int arr[],int n,int first,int last)
{
	if(first>=last)
	{
		return ;
	}
	//this is equal to (first+last)/2;
	/* it is used to control the overflow
	program if the size of would be very very large*/
	int mid=first+(last-first)/2;

	mergesort(arr,n,first,mid);
	mergesort(arr,n,mid+1,last);
	merge(arr,n,first,last);

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
    int first=0,last=n-1;
	mergesort(arr,n,first,last);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}