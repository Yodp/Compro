#include<iostream>
using namespace std;
void main()
{
	int point=1,pass=0,fail=0;
	while(point>=0)
	{
		cout<<"Enter Point (0-100) or -999 :";
		cin>>point;
		    if ((point<50)&&(point>=0))
				fail=fail+1;	
			else if ((point>=50)&&(point<=100))
				pass=pass+1;
			else if (point==-999)
				break;
			while((point<0)||(point>100))
			{
				cout<<"---------------------------------\n";
				cout<<"Re-Enter Point (0-100) or -999 :";
				cin>>point;
			if (point==-999)
				break;
			else if ((point<50)&&(point>=0))
				fail=fail+1;	
			else if ((point>=50)&&(point<=100))
				pass=pass+1;
			
			}
	
	}
	cout<<"---------------------------------\n";
	cout<<"Pass = "<<pass<<" students"<<endl;
	cout<<"Fail = "<<fail<<" students"<<endl;
}