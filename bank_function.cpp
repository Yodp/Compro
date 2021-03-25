#include<iostream>
using namespace std;
int calAm(int,int);
void main()
{
	int Amount,Year,total=0,totalmoney=0;
	int k=1;
	cout<<"Khoayai Bank Information System **Interest = 3%**"<<endl;
	do
	{
	
	cout<<"Input Amount "<< k <<" : " ;
	cin>>Amount ;
	cout<<"Input Year "<< k <<" : " ;
	cin>>Year ;
	totalmoney=totalmoney+calAm(Amount,Year);
	cout<<"\n*******************************"<<endl;
	k+=1;
	}
	
	while(k<4);
	{
		cout<<"Total "<< k-1 << " people "<<"="<<totalmoney<<endl;
	}
	

}

int calAm(int Amount, int Year)
{
	int t=0;
	int total=0,totalmoney=0;
	t++;
	total=(((Amount*3)/100)*Year)+Amount;
	cout<<"Total your money "<<t<<": "<<total;
	return(total);
}
