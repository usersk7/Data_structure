#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int ev[100],od[100]; 
int ce = 0;
int co = 0;

int sort(int a[])
{

	int i;
	//odd even sorting 

	for(i=0;i<100;i++)
	{
		if(a[i]%2==0)
		{
		    ev[ce]=a[i];
			ce++;

		}
		
		else
		{   
			od[co]=a[i];
			co++;
		
		}

	}
}



int main()
{
	int a[100],i;
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
	
		a[i]=rand()%100;  //equate the value of upto 99 numbers
	}

	
	//display full array
	
	cout<<"this is array with randome number : "<<endl;
	for(i=0;i<100;i++)
		cout<<a[i]<<" ";

cout<<endl<<endl<<endl;



         sort(a);



//display even

	cout<<"Even no are : ";

	for(i=0;i<ce;i++)
	{
		cout<<ev[i]<<" ";

	}

//display odd

	cout<<endl<<endl<<endl<<"Odd numbers are : ";

	for(i=0;i<co;i++)
		cout<<od[i]<<" ";

	cout<<endl;

return 0;



}
