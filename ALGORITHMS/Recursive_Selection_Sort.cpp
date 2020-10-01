//OWN to be WON

#include<iostream>

using namespace std;

int min(int a[],int i,int n)
{
    if(i==n)
    return i;
    int k = min(a,i+1,n);
    return (a[k]<a[i])?k:i;
}

void Recursive_SelectionSort(int a[],int i,int n)
{
    if(i==n)
    return;
    
    int k = min(a,i,n-1);
    if(k!=i)
    {
        int t = a[i];
        a[i] = a[k];
        a[k] = t;
    }
    Recursive_SelectionSort(a,i+1,n);
}

int main()
{
    int a[9];
    for(int i=0;i<9;i++)
        cin>>a[i];
    Recursive_SelectionSort(a,0,9);
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
}

