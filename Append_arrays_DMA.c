#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *b=(int *)malloc(5*sizeof(int));
	int c[5]={1,2,3,4,5};
	int j;
	for(j=0;j<5;j++)
	{
		b[j]=c[j];
	}
	int a[5]={6,7,8,9,10};
	b=(int *)realloc(b,10*sizeof(int));
	int i;
	for(i=5;i<10;i++)
	{
		b[i]=a[i-5];
	}
	
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
	
}
