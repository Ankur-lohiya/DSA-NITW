#include<iostream>

using namespace std;

struct Stack
{
	int top;
	int size;
	int elements[100];
	
	Stack(int s)
	{
		top = -1;
		size = s;
	}
	
	void push(int x)
	{
		if(top==size-1)
		{
			cout<<"Stack is Full\n";
		}
		else elements[++top]=x;
	}
	
	void pop()
	{
		if(top==-1)
			cout<<"Empty Already";
		top--;
	}
	
	int top_element()
	{
		if(top==-1)
			return -1;
		return elements[top];
	}
	
	bool empty()
	{
		if(top==-1)
			return true;
		return false;
	}
};

int main()
{
	int size;
	cin>>size;
	Stack S(size);
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		S.push(a);
	}
	while(!S.empty())
	{
		cout<<S.top_element()<<" ";
		S.pop();
	}	
}
