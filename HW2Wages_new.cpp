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
	com_cal(salary,sale,com)
	cout<<"Total Revenue  "<<com_cal(salary,sale,com)<<"Bath\n";
	cout<<"----------------------------------\n";

}
int com_cal(float salary ,float sale,float com)
{
	(((sale*com)/100)+salary);
	return(salary,sale,com);

}
