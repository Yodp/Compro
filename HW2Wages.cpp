#include <iostream>
#include <string>
using namespace std;
void main()
{
	float salary,sale,com;
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
	cout<<"Total Revenue  "<<(((sale*com)/100)+salary)<<"Bath\n";
	cout<<"----------------------------------\n";
}