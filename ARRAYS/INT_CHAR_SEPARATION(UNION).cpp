#include<bits/stdc++.h>

using namespace std;

union U
{
	int i;
	char c;
};
int main()
{
	cout<<"Enter Array Size : ";
	int n;
	cin>>n;
	union U a[n];
	int beg=0,last=n-1,tag,data,tags[n];
	char ch;
	while(beg<=last)
	{
		cout<<"0 for entering integer or 1 for entering character : ";
		cin>>tag;
		if(tag==0)
		{
			cin>>a[beg].i;
			tags[beg]=tag;
			beg++;
		}
		else
		{
			cin>>a[last].c;
			tags[last]=tag;
			last--;
		}		
	}
	cout<<"Array Filled\n Output : ";
	for(int j=0;j<n;j++)
	{
		if(tags[j]==0)
			cout<<a[j].i<<" ";
		else cout<<a[j].c<<" ";
	}
}

