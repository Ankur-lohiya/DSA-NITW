#include<bits/stdc++.h>

using namespace std;

void insert(int a[],int l,int i)
{
	if(l<0)
	return ;
	if(a[l]>a[i])
	{
		swap(a[l],a[i]);
		i = l;
	}
	insert(a,l-1,i);
}

void insertion_sort(int a[],int n,int i)
{
	if(i==n)
	return;
	insert(a,i-1,i);
	insertion_sort(a,n,i+1);
}

int main()
{
	cout<<"Enter Size of Array : ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Array :  ";
    for(int i=0;i<n;i++)
    	cin>>a[i];
    insertion_sort(a,n,1);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
}
