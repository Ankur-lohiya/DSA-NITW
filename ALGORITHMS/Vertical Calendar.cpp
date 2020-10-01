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
	
	string weekdays[] = {
							"Sun",
							"Mon",
							"Tue",
							"Wed",
							"Thur",
							"Fri",
							"Sat",
						};
	
	
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
	
	
	for(int j=0;j<12;j++)  // j corresponds to month number 
	{
		cout<<"\n"<<months[j]<<"\n";
		
		for(int i=0;i<7;i++)
		{
			cout<<weekdays[i]<<"\t";
			if(gap>i) //checking if this days is not in the starting period of month
			{
				cout<<"\t";
				int p = 0;
				while(8-gap+p+i <= days[j])   // running loop till day on months are valid
				{
					cout<<(8 - gap + p + i)<<"\t";  // each vertical row differs by 7
					p+=7;                       
				}
			}
			else
			{
				int p = 1;                      //when month first column is filled
				while(i-gap+p<=days[j])
				{
					cout<<(i - gap + p)<<"\t";
					p += 7;
				}
			}
			cout<<"\n";
		}
		gap = (gap + days[j])%7;            //gap maintained for next month
	}	
	return 0;
}
