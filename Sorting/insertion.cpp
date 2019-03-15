/*   			
 *    			shubham kumbhar
 *
 *    			insertion sort
 *    			15/03/19
 * 
 * */


#include<iostream>
#include<time.h>
using namespace std;
void insertion(int [],int);
void insertion(int a[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]= a[j];
			j=j-1;
			
		}
			a[j+1]=key;
	}

}


int main()
{
	int i;
	int arr[]={50,40,30,10,20};
	int n = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<n;i++)
	insertion(arr,n);

	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}
