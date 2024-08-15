#include<iostream>
#include<time.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main()
{
	int i,range,random,guess,dif,possible;
	
	cout<<"Enter the maximum range in decades(m X 10) to which you want to guess:"<<endl;
	cin>>range;
	
	srand(time(NULL));		//it provides the computer time to generate different random value each time in rand()
	random = (rand()%range+1);//dividing by 100 makes th erand() to generate random value between 1 to 99 and + 1 makes to generate 1 to 100
	
	if(range==10)
	{
		possible=5;
	}
	else
	{
		possible=10;
	}
	
	cout<<"Guess the number between 1 to "<<range<<" where you have only ten attempts:"<<endl;
	
	for(i=0; i<=10; i++)
	{
		cin>>guess;
	
		dif = random - guess;
	
		if(dif==0)
		{
			cout<<"Congratulations! You guessed the exact number:"<<endl;
			break;
		
		}
			
		else if(dif<=possible && dif>=-possible)
			cout<<"You are nearer to the number:"<<endl;
		else if(i<10)
			cout<<"You are far away from the number:"<<endl;
		else
			cout<<"Oops! You losed the guessing match";
	}
	getch();
	return 0;
}
