#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void ListStudent(int score[], string name[], int number);
char Calgrade(int score);
int main()
{
	int score[50], number;
	char grad;
	string name[50];
	cout << "Input number of student : ";
	cin >> number;
	for (int i = 0;i < number;i++)
	{
		cout << "Enter Name : ";
		cin >> name[i];
		cout << "Enter Score " << i + 1 << " : ";
		cin >> score[i];
		cout << endl;
	}
	ListStudent(score, name, number);


}
void ListStudent(int score[], string name[], int number)
{
	for (int i = 0;i < number;i++)
	{
		cout << "Studert Name : " << name[i] << "Score " << i + 1 << " = " << score[i] << setw(15) << setfill(' ') << "Your grade is : " << Calgrade(score[i]) << endl;
	}
}
char Calgrade(int score )
{	
	char grad;
	if (score >= 80) {
		grad = 'A';
	}
	else if (score >= 70) {
		grad = 'B';
	}
	else if (score >= 60) {
		grad = 'C';
	}
	else if (score >= 50) {
		grad = 'D';
	}
	else cout << "Enter Score 50-100 ";

	return grad;
}