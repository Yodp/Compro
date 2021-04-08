#include<iostream>
#include<string>
using namespace std ;
void calprice(float price[5][3]);
void display(float price[5][3],string name[5]);
int main () {
	float  price[5][3];
	string name[5];
	for (int i=0;i<5;i++){
		cout <<"Enter Product Name : ";
		cin  >>name[i];
		cout <<"             Price : ";
		cin  >> price [i][0] ;
	}
	calprice(price);
	display (price,name);
return 0 ;
}


void calprice(float price [5][3])
{
	for (int i=0;i<5;i++)
	{
		price[i][1] = price[i][0]*0.07;
		price[i][2] = price[i][0]+price[i][1];
	}
}
void display(float price[5][3],string name[5]){
	cout << "No\tproduct\t\t\tprice\t\tvat7%\t\tNet "<<endl ; 
	for (int i=0;i<5;i++){
		cout << i+1<<"\t"<<name[i]<<"\t\t\t"<<(float)price[i][0]<<"\t\t"<<(float)price[i][1]<<"\t\t"<<(float)price[i][2]<<endl;
	
	
}
}