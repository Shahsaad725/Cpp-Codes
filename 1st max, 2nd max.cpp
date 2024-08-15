#include<iostream>
using namespace std;
int main()
{
//	const int size=5;
	int max;
	//int arr[size]={90,95,100,99,72};	
	int k;
	int index;
	int index2;
	
	int max_2;
	int x=0,y=0;
	
	
	cout<<"How much elements be there in array:"<<endl;
    cin>>x;

	y=x; //without making the last index empty for '\0' gives a garbage value because
	x+1; //the printing loop checkes to the index and their no any int is stored nor 
	 //can be read.


	int arr[x];

	cout<<"\nEnter the numbers into array:"<<endl;

	for(k=0;k<y;k++)
{
	cin>>arr[k];
}

	cout<<"The  array is:{";

for(k=0;k<y;k++)
{
	cout<<arr[k];
	if(k<y-1)
	{
	cout<<",";
	}
}
cout<<"}";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	max=arr[0];

	for(k=1; k<x; k++)
	{
		if(arr[k] > max)
		{
			max = arr[k];
			index= k;
		}
	}

	//	diff = max - arr[0];

	max_2 = arr[0];
	for(k=1; k<x; k++)
	{
		
		if(arr[k] > max_2 && arr[k] == max_2 && k!=index)
		{
			max_2 = arr[k];
			index2= k;
		}
		
	
	}
	cout<<endl<<"the maximum is :"<<max<<endl;
	cout<<index<<endl;

	cout<<"2nd second maximum is :"<<max_2<<endl;
	cout<<index2<<endl;
	
	return 0;
	
}


