#include <stdio.h>
int avg(int *ptr,int l)
{
	int i,sum=0,avg;
	for (i=0;i<l;i++)
	{
		sum=sum+ptr[i];
	}
	avg=sum/l;
	return avg;
}
int main()
{
	int a[5]={2,5,7,3,8};
	int n,x,j;
	n=sizeof(a)/sizeof(int);
	x=avg(a,n);
	for(j=0;j<n;j++)
		printf("%d",a[j]);
	printf(" The average of the array is %d",x);
	return 0;
}
