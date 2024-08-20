#include<iostream>
#include<time.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main()
{
	int i,k=1,range,random,guess,dif,possible;
	
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
	cout<<"Attempt No:1"<<endl;
	
	for(i=0; i<=10; i++)
	{
		cin>>guess;
	
		dif = random - guess;
	
		if(dif==0)
		{
			cout<<"Congratulations! You guessed the exact number:"<<endl;
			break;
		
		}
			
		else if(dif<=possible && dif > 0)
			cout<<"You are below and nearer to the number:"<<endl;
		else if(dif>=-possible && dif < 0)
			cout<<"You are nearer and above the number:"<<endl;
		else if(i<10)
		{
			if(dif < -10)
				cout<<"You are too higher from the number:"<<endl;
			else if(dif > 10)
				cout<<"You are too below from the number:"<<endl;
		}
		else
			cout<<"Oops! You losed the guessing match"<<endl;
	
	cout<<"Attemt No:"<<i+1+k<<endl;
	k = 0;
	}
	getch();
	return 0;
}
