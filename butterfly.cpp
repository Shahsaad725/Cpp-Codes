#include<iostream>
using namespace std;

int main()
{
	int size;
	int i=1;
	int j=1;
	int min_lmt=1;
	
	
	cout<<"Enter the size of the butterfly:";
	cin>>size;
	
		if((size%2) == 1)
	{
		size += 1;
	}
	
	size *= 2;	
	
	
	int max_lmt = size;	
	while(i <= size) //for changing the number
	{
		
		for(j=1 ;j<=size;j++) //for drawing buttterfly horitzotally each line
		{
			if((j<=min_lmt) || (j >= max_lmt))
			{
				cout<<"+";
			}
			else
			{
				cout<<" ";
			}

		}
		
	if(i < (size/2))
	{
		min_lmt++;
		max_lmt--;
	}
	else
	{
		min_lmt--;
		max_lmt++;
	}
	
		
	cout<<endl;
	i++;
	}

return 0;
}