#include<stdio.h>
union student
{
	char name[20];
	float marks;
	int rollno;
}s;
int main()
{
	float sum=0;
	int i;
	printf("Enter name");
	scanf("%s",&s.name);
	for(i=0;i<5;i++)
	{
		printf("Enter marks");
		scanf("%f",&s.marks);
		sum=sum+s.marks;
	}
	printf("Enter roll number");
	scanf("%d",&s.rollno);
	
	printf("Avg of marks is %f",sum/5);
		
	
}
