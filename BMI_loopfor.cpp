#include<iostream>
#include<string>
using namespace std;
void main()
{
	int i=1,round;
	float weight,height,bmi;
	string name;
	cout<<"Enter Number of person :";
	cin>>round;
	while(i<=round)
	{
		cout << "Enter name "<<i<<" :";
		cin >> name;
		cout << "Enter your weight "<<i<<"(kg.): ";
		cin >> weight;
		cout << "Enter your hight "<<i<<"(cm.): ";
		cin >> height;	
		bmi=weight/((height/100)*(height/100));
			if (bmi>40.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Obese Class III\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if(bmi>=35.01&&bmi<=40.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Obese Class II\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi>=30.01&&bmi<=35.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Obese Class I\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi>=25.01&&bmi<=30.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Overweight\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi>=18.01&&bmi<=25.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Normal\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi>=17.01&&bmi<=18.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Mild Thinness\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi>=16.01&&bmi<=17.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Moderate Thinness\n";
				cout<<"-----------------------------------------------------------\n";
			}
			else if (bmi<16.00)
			{
				cout<< "BMI "<<i<<" = "<<bmi<<endl;
				cout<< "Your Category of BMI is Severe Thinness\n";
				cout<<"-----------------------------------------------------------\n";
			}
			i++;
	}
	
	
}