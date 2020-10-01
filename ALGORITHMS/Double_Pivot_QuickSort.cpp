#include<iostream>

using namespace std;

int partition(int a[],int lo,int hi,bool first_pivot,int &p)
{
	if(a[lo]>a[hi] && first_pivot) // for finding left pivot
		swap(a[lo],a[hi]);
	int l=lo,h=hi;
	int i=l;
	l+=1;
	while(l<=h)
	{
		if(a[l]<=a[i] && a[h]>=a[i])
		{
			l++;
			h--;
		}
		else if(a[h]>=a[i])
		h--;
		else if(a[l]<=a[i])
		l++;
		else if(a[l]>=a[i] && a[h]<=a[i])
		{
			swap(a[l],a[h]);
			l++;
			h--;
		}
		
	}
	swap(a[i],a[h]);
	// if left pivot is found initially then using the same partition function
	// to find the right pivot
	if(first_pivot) 
	{
	    // storing left pivot
		p = h;
		// here passing left_pivot argument as false
		return partition(a,h+1,hi,false,p);
	}
	else return h;
	// returned right pivot
}

void DPquicksort(int a[],int low,int high)
{
	if(low<high)
	{
	    int lp,rp;
    	rp=partition(a,low,high,true,lp);
    	DPquicksort(a,low,lp-1);
    	DPquicksort(a,lp+1,rp-1);
    	DPquicksort(a,rp+1,high);
    }
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
    DPquicksort(a,0,n-1);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";   
}
