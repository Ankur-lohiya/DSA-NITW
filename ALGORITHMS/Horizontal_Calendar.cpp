#include<iostream>

using namespace std;

int main()
{
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,gap ;
	string months[]=	{"January",
						"February",
						"March",
						"April",
						"May",
						"June",
						"July",
						"August",
						"September",
						"October",
						"November",
						"December"};
	cout<<"Enter Year : ";				
	cin>>year;
	
	//checking if leap year
	if((year%4==0 && year%100!=0) || year%400==0)
		days[1]=29;
	
	/*
	since normal year has 365 days and 365 % 7 = 1  which
	means every year new year starts with the next day it started the previous year
	but for leap year it forwards by 2 days
	*/
	
	// taking previous year into account as per current year
	int y = year - 1;
	
	// (y/4 + y/400 - y/100) gives account of days forwarded due to leap year 
	gap = (y + y/4 - y/100 + y/400 + 1)%7;
	   
	for(int i=0;i<12;i++)
	{
		cout<<"\n"<<months[i]<<"\n";
		cout<<"Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";
		for(int sp = 0;sp<gap;sp++)
		cout<<"\t";
		for(int dd =1;dd<=days[i];dd++,gap=(gap+1)%7) //gap = (gap+1)%7, to keep it between 0 and 6
		{
			//checking if last day of week reached
			if(!gap)
			{
				cout<<'\n';
			}
			cout<<dd<<"\t";
		}
		cout<<"\n";
	}	
	return 0;
}

