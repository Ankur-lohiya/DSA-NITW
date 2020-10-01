#include<iostream>

using namespace std;

void Recursive_bubbleSort(int a[], int n) 
{  
    if (n == 1) return; 
        
    for (int i=0; i<n-1; i++) 
    {
        if (a[i] > a[i+1]) 
        {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
        }
    }
            
    Recursive_bubbleSort(a, n-1); 
}

int main()
{
    int a[9];
    for(int i=0;i<9;i++)
        cin>>a[i];
    Recursive_bubbleSort(a,9);
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
}

