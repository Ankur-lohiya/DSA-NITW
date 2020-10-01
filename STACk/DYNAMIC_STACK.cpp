#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};
typedef node* lptr;

class stack
{
	lptr top;
	
	public:
		stack()
		{
			top = NULL;
		}
		void push(int x);
		int pop();
		bool empty();
};

int main()
{
	stack S;
	S.push(1);
	S.push(2);
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	S.push(7);
	S.push(8);
	
	while(!S.empty())
		cout<<S.pop()<<" ";
}

void stack::push(int x)
{
	lptr temp = new node;
	temp->data = x;
	temp->next=top;
	top = temp;
}

int stack::pop()
{
	if(top==NULL)
	{
		cout<<"Stack is empty\n";
		return -1;
	}
	else
	{
		int t = top->data;
		top=top->next;
		return t;
	}
}

bool stack::empty()
{
	if(top==NULL)
		return true;
	return false;
}
