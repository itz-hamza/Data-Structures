// question 5 lab 1

#include <iostream>
using namespace std;

int check(bool[][5],int,int);

int main()
{	
	int student1, student2, answer;
	/*int **array2d = new int*[5];
	
	for(int i=0; i<5;i++)
	{
		array2d[i] = new int[5]; 
	}
	*/
		
	bool array2d[5][5]={
	{0,1,0,1,1},
	{1,0,1,0,1},
	{0,1,0,0,0},
	{1,0,0,0,1},
	{1,1,0,1,0}
	};
	
	// apparently, there is only one way to initialize a 2d array and that is to initialize
	//it with declaration. now, how can we use a dynamic 2d array and initialize it without loop?
	// is it possible? why, and why not?
	
	cout<<"Enter the student numbers and the program will tell whether they are classmates or not"<<endl;
	
	cin>>student1;
	cin>>student2;
	
	answer=check(array2d,student1,student2);
	
	if(answer>0)
	{
		cout<<"The students have similar classmate number :"<<answer;
	}
	else
	cout<<"They don't have any similar classmate"<<endl;
}

int check(bool arr2[][5],int student1,int student2)
{
	int ans = -1;
	
	for(int i=0;i<5;i++)
	{
		if(arr2[i][student1]==1 && arr2[i][student2]==1)
		{
			ans=i;
		}		
	}
	return ans;
	
	
}
