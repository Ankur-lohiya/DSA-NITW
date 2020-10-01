/*Given a nonnegative integer n, write a function that lists all strings formed from exactly n pairs of balanced parentheses. 
For example, given n = 3, you'd list these five strings:

              ((( )))   
			  (( )( ))             
			  (( ))( )          
			  ( )(( ))         
			  ( )( )( )
*/

#include<bits/stdc++.h>     

using namespace std;

void print_all_combination(int n,int cur,int left,int right,char v[]) 
{       
    if(right == n)  
    { 
    	for(int i=0;v[i]!='\0';i++)
    		cout<<v[i];
    	cout<<"\n";
        return; 
    } 
    else
    { 
        if(left > right)  
        { 
            v[cur] = ')'; 
            print_all_combination(n,cur+1,left,right+1,v); 
        } 
          
        if(left < n) 
        { 
	        v[cur] = '('; 
	        print_all_combination(n,cur+1,left+1,right,v); 
        } 
    } 
} 

int main() 
{ 
    int n;
	cin>>n;
	char v[100];
	v[2*n]='\0';
    print_all_combination(n,0,0,0,v); 
    return 0; 
}
