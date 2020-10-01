/*
Write a recursive function that, given two strings, returns whether the first string is a

subsequence of the second. For example, given hac and cathartic, you should return true,

but given bat and table, you should return false.
*/

#include<bits/stdc++.h>     

using namespace std;

bool possible(string s,string t,int &si,int ti)
{
	if(si==s.length())
	return false;
	if(s[si]==t[ti])
	return true;
	si++;
	return possible(s,t,si,ti);
}

bool isSubseq(string s, string t,int si,int ti)
{
	if(not possible(s,t,si,ti))
		return false;
	else if(ti<t.length()-1)
	return isSubseq(s,t,si,ti+1);
	else return true;
}


int main()
{
	string s,t;
	cin>>s>>t;
	cout<<(isSubseq(s,t,0,0)?"True":"False");
}
