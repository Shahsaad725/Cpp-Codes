//prints diamond shape 
#include<iostream>
using namespace std;
int main ()
{
	int forward, i, j = 0, k, h, max_len;
	
	cout<<"Enter the height of diamonf characterwise:";
	cin>>h;
	cout<<endl;
	
	forward = h;
	max_len = 2*h;
	
	for(i = 0; i < max_len; i++)
	{
		for(k = 1; k < h; k++)
		{
			cout<<" ";
		}
		
		for( ; k <= (forward + j); k++)
		{
			cout<<"+";
		}
	
	j++;
		
	cout<<endl;
		
	if(i<(forward-1))
	{
		h--;
	}
	else
	{
		h++;
		j -= 2;
	}
		
	}
   
return 0;
}
