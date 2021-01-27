#include <iostream>
#include <string>
using namespace std;

void main()
{
	float salary,sale,com;
	float a,b;
	string name;
	cout<<"****Homework 2************\n";
	cout<<"Enter Name   :";
	cin>> name ;
	cout<<"Enter Salary   :";
	cin>> salary ;
	cout<<"Enter Sale   :";
	cin>> sale ;
	cout<<"Enter Commission Percent  :";
	cin>> com ;
	cout<<"------output----------\n";  
	cout<<"Your name = "<<name<<endl;
	cout<<"Total Revenue  "<<com_cal(a,b)<<"Bath\n";
	cout<<"----------------------------------\n";

}
int com_cal(float a,float b)
{
	(((sale*com)/100)+salary);
	return(a,b);

}
