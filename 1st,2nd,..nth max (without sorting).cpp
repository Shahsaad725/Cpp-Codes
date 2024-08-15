#include<iostream>
using namespace std;

int main()
{
	
	int i=0,k,j,index=0,size=5,temp,lar;
	
	cout<<"How many elements be there in the array:"<<endl;
	cin>>size;
	
	int arr[size];


	cout<<"\nEnter the numbers into array:"<<endl;

	for(k=0;k<size;k++)
	{ 
		cin>>arr[k];
	}

	cout<<"The array is:{";

	for(k=0;k<size;k++)
	{
		cout<<arr[k];
		if(k<size-1)
		{
			cout<<",";
		}
	}
	cout<<"}"<<endl;
	
	
	
	
	
	for(k=1; k<=size; k++)
	{
		lar = arr[0];
		index = 0;
		
		for(i=1; i<=size; i++)
		{
			//lar = arr[i-1];
			if(lar < arr[i] && arr[i]!=0 )		
			{
					lar = arr[i];
					index = i;
			}
			
		}
			
		if(k==1)
		{
			cout<<"The largest no is "<<lar<<" and on index "<<index<<endl;
		}
		else if(k==2)
		{
			cout<<"The 2nd larger no is "<<lar<<" and on index "<<index<<endl;
		}
		else
		{
	//		if(k==size)
		//		index--;
			cout<<"The "<<k<<"th larger no is "<<lar<<" and on index "<<index<<endl;
		}
		
		arr[index]=0;
		
/*		cout<<"{";
		for(j=0; j<size; j++)
			{
				cout<<arr[j];
				if(j<(size-1))
				{
					cout<<",";
				}
			}	
		cout<<"}"<<endl;
	*/	
	}
	
	return 0;
}