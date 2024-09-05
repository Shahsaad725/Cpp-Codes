#include<iostream>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
	int dice_1 = 0,dice_2 = 0;
	

	
	int i = 1, check = 0;
	
	cout<<"Enter any key:"<<endl;
	
	srand(time(NULL));		//it provides the computer time to generate different random value each time in rand()	
		
	
	while(dice_1 < 100 && dice_2 < 100)
	{
		cout<<i<<endl;
		

		getch();
		
		if( (i % 2) == 0)
		{
				check = (rand()%6+1);
				if((dice_1+check) <= 100)
				{
					dice_1 += check;
					cout<<"Player_1 = "<<dice_1<<endl;
				}
				
				if(dice_1==100)
				{
					cout<<"Player_1 is the Winner:"<<endl;
				}
			
		}
		else
		{

				if((dice_2+check) <= 100)
				{
					dice_2 += check;
					cout<<"Player_2 = "<<dice_2<<endl;

				}
								
				if(dice_2==100)
				{
					cout<<"Player_2 is the Winner:"<<endl;
				}	
			
		}
		

	i++;
	}

return 0;
	
}