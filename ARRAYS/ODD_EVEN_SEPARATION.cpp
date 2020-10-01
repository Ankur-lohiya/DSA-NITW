#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"Enter Array Size : ";
	int n;
	cin>>n;
	int a[n];
	int beg=0,last=n-1,tag;
	while(beg<=last)
	{
		cout<<"0 for entering from beginning or 1 for entering from end : ";
		cin>>tag;
		if(tag==0)
		{
			cin>>a[beg];
			beg++;
		}
		else
		{
			cin>>a[last];
			last--;
		}		
	}
	cout<<"Array Filled\n Output : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

