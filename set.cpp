//shubham kumbhar
//find a prime no using set


#include<iostream>
#include<set>

			
using namespace std;

int main()
{
	set<int> number={1,2,3,5,7,9,11,13,10,4,5,65,12,43};
	int i,flag=0;
	
	for(auto it= number.begin();it != number.end(); it++)
	{
		for(i=2; i <= *it/2;++i)
		{
			if(*it % i == 0)
			{
				flag = 1;
				break;
			}
			else
			{
				flag=0;
			}
		}

		if(*it ==1)
		{
			cout<< "    1 is not prime nor composit number"<<endl;
		}
		else
		{
			if(flag == 0)
			{
				cout<<"  "<<*it<<" is prime no"<<endl;
			}
			else
			{
				cout<<"  "<<*it<<" is not a prime no"<<endl;
			}
		}
	}

	return 0;

}
