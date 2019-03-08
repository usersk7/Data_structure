#include<iostream>
#include<map>
using namespace std;




map<int, int> student;

int main()
{

	int pass_count=0,fail_count=0;


student[1]=50;
student[2]=90;
student[3]=40;
student[4]=30;
student[5]=5;
student[6]=10;
student[7]=66;
student[8]=60;
student[9]=74;




map<int, int>:: iterator it;


	for(it =student.begin(); it !=student.end();it++)
	{
		if((it->second)>=40)
		{
			
			
			cout<<"Pass ";
			cout<<it->first<<" "<<it->second<<endl;
			
			pass_count++;
		}
		else
		{
			cout<<"Fail";
			cout<<it->first<<" "<<it->second<<endl;
			fail_count++;
		

		}
	}



	cout<<endl<<endl;


	cout<<"Total pass student is : "<<pass_count<<endl;

	cout<<"Total fail student is : "<<fail_count<<endl;

return 0;
}

