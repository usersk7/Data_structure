#include<iostream>
using namespace std;
template <typename T>
T apnasort(T a[],int n)
{
	int i,j;
	T temp;



	 	cout<<"before Sorting array is : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

cout<<endl;

	// here sorting logic start     n


	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j] = temp;
			}
		}
	}
	
	 	cout<<"After sorting array is  : ";
	for(i=0;i<n;i++)
	{
	 	cout<<a[i]<<" ";
	}
cout<<endl;

}

int main()
{
	int arr[]={5,3,4,2,1};
	char str[]={'s','h','u'};
	float flo[]={ 1.2, 4.4, 3.3, 5.5};


	int n = sizeof(arr)/sizeof(arr[0]);

	int k = sizeof(str)/sizeof(str[0]);

	int l = sizeof(flo)/sizeof(flo[0]);


	        cout<<" we are sorting integer array here we go  : "<<endl;
		apnasort(arr,n);
		cout<<endl;

		cout<<"we are sotrting charactor array here we go "<<endl;
		apnasort(str,k);		
		cout<<endl;

		cout<<"we are sorting float array here we go  : "<<endl;
		apnasort(flo,l);
	        cout<<endl;


		return 0;


}


