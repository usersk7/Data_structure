#include<iostream>
using namespace std;
#define MAX 100


	int i,j,top;
	int s[MAX];

class skstack
{
	public:
		skstack()
		{
			top= -1;
			for(i=0;i<MAX;i++)
			{	
				s[i]=NULL;
				
			}
		}

int push(int val);
int pop();
int display();
int isempty();

};
   int skstack:: push(int val)
		{
			if(top>=MAX-1)
			{
				cout<<"stack is overflow ";
			}
			else
			{
				top++;
				s[top]=val;
			}
		}

    int skstack ::  pop()
		{
			if(top<= -1)
			{
				cout<<"stack is underflow "<<endl;
			}
			else
			{
				cout<<"pop element "<<s[top]<<endl;
				top--;
			}
		}

     int skstack:: isempty()
		{
			return (top<0);
		}
	
      int skstack::display()
		{
			if(top<=-1)
			{
				cout<<"stack is empty now "<<endl;
			}
			else
			{
				for(i=0;i<=top;i++)
				{
				cout<<"Current value in stack is : "<<s[i]<<endl;
				}
			}
		}




int main()
{

	skstack s;
	s.isempty();
	s.push(30);
	s.push(40);
	s.display();

	s.pop();
	s.display();

	s.pop();

	s.display();


	return 0;
}



