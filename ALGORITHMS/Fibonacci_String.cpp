/*
The Fibonacci strings are a series of recursively­defined strings. 
F0 is the string a, F1 is the string bc, and Fn+2 is the concatenation of Fn and Fn+1. 
For example, F2 is abc, F3 is bcabc, F4 is abcbcabc, etc. 
Given a number n and an index k, return the kth character of the string Fn.
*/


#include<bits/stdc++.h>     

using namespace std;

string fib_str(int n)
{
	if(n==0)
		return "a";
	if(n==1)
		return "bc";
	else return fib_str(n-2)+fib(n-1);
}

int main()
{
	int n,k;
	cin>>n>>k;
	string s = fib_str(n);
	cout<<s[k]<<"\n";
}
