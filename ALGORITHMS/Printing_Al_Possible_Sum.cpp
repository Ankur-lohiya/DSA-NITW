/*
Given a number n, generate all distinct ways to write n as the sum of positive integers. 
For example, with n = 4, 
the options are 4, 3 + 1, 2 + 2, 2 + 1 + 1, and 1 + 1 + 1 + 1.
*/

#include <bits/stdc++.h> 

using namespace std; 
  
void PrintAllPossibleSum(int v[],int p, int itr, int n) 
{
    if (n==0) 
    {
    	if (p!=1) 
		{ 
        	for (int i=0;i<p;i++) 
			{ 
            	cout<<v[i];
				if(i!=p-1)cout<<"+"; 
        	} 
        cout<<"\n"; 
    	} 
	}
    for (int j=n;j>=itr;j--)
	{
        v[p] = j;
        PrintAllPossibleSum(v,p+1,j,n-j); 
        v[p] = 0; 
    } 
} 
  
int main() 
{ 
    int n,itr=1 ;
	cin>>n; 
    int v[100]={0}; 
    cout<<n<<"\n";
    PrintAllPossibleSum(v,0,itr,n);
}
