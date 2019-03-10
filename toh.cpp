#include<iostream>
using namespace std;
#define MAX 100


//	int i,j,top;
//	int s[MAX];

class toh 
{
	int i,j,top;
	int s[MAX];
	public:
		toh()
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


	int pro(toh *,toh *); //passing s2 and s3 object to s

};
   int toh:: push(int val)
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

    int toh ::  pop()
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

     int toh:: isempty()
		{
			return (top<0);
		}
	
      int toh::display()
		{
			if(top<=-1)
			{
				cout<<"stack is empty now "<<endl;
			}
			else
			{
				for(i=top;i>=0;i--)
				{
				cout<<"Current value in stack is : "<<s[i]<<endl;
				}
			}
		}



	int toh ::pro(toh *ptrs2,toh *ptrs3)
	{
cout<<endl<<endl<<endl;
	//opretion on stack B A to B       1st itreation

		ptrs2->push(s[top]);
		cout<<"A is poped"<<endl;
		pop();
		cout<<"stack A is showing "<<endl<<display();
		cout<<endl;
		cout<<"stack B is showing "<<ptrs2->display();

cout<<endl<<endl<<endl;


	//opration on stack C A to C  2st itreation

		ptrs3->push(s[top]);
      		  cout<<"A is poped"<<endl;
		pop();
		cout<<"stack A is showing "<<endl<<display();
		cout<<endl;
		cout<<"stack C is showing "<<ptrs3->display();cout<<endl;

cout<<endl<<endl<<endl;
	//opretion on stack B to C 3st itreation

		cout<<"Disk B : "<<ptrs2->s[top]<<"is moved to C :  "<<ptrs3->s[top];
		ptrs3->push(ptrs2->s[top]);
		ptrs2->pop();
		cout<<"stack B is showing "<<ptrs2->display();cout<<endl;
		cout<<"stack C is showing "<<ptrs3->display();cout<<endl;

cout<<endl<<endl<<endl;


     //opretion on stack A to B 4st itreation

		cout<<"Disk A : "<<s[top]<<" is moving to B :  "<<ptrs2->s[top];
		ptrs2->push(s[top]); 
		pop();
		cout<<"stack A is showing "<<display();cout<<endl;
		cout<<"stack B is showing "<<ptrs2->display();cout<<endl;

cout<<endl<<endl<<endl;	
	
     //opretion on stack C to A  5th itreation

		cout<<"Disk C : "<<ptrs3->s[top]<<" is moving to A :  "<<s[top++];
		push(ptrs3->s[top]); 
		ptrs3->pop();
		cout<<"stack c is showing "<<ptrs3->display();cout<<endl;
		cout<<"stack A is showing "<<display();cout<<endl;
















	}


int main()
{

	toh s,s2,s3;

	cout<<"stack A is created: "<<endl;

	s.isempty();
	s.push(30);
	s.push(20);
	s.push(10);
	s.display();

//	cout<<"stack B is created : "<<endl;

//	s2.isempty();
	
//	cout<<"stack C is created : "<<endl;
//	s3.isempty();

	cout<<"stack A able to accesible to B & C object: "<<endl;

	s.pro(&s2,&s3); //function call wit obj pass 

cout<<endl<<endl<<endl;



	





	return 0;
}



