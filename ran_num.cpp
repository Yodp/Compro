#include<iostream>
#include <time.h>
using namespace std;
void main()
{
        int randomNum;
        int guess;
        int count=1;
		cout<<"\n###Welcome to guessing number game### \n";
		cout<<"Secret number has been chosen \n";
        srand(time(NULL));
        randomNum = 1 + rand( ) % 10;
        do
		{ 
			cout<<"Guess the number (1 to 10) : ";      
			cin>>guess;
            count++;
              if(guess > randomNum)
                   cout<<"The secret number is lower \n";
              else if(guess < randomNum)
                   cout<<"The secret number is higher \n";
        }
		while(randomNum != guess);
			cout<<"Congratulations! \n";
			cout<<"The secret number is  "<< guess<<endl;
			cout<<"You made "<< count<< " guesses"<<endl;
}