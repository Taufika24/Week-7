#include <stdio.h>
int findlargest(int *ptr,int l)
{
	int i,max=0;
	for (i=0;i<l;i++)
	{
		if(ptr[i]>max)
			max=ptr[i];
	}
	return max;
}
int main()
{
	int n,x,j;
	printf("Enter number of elements in array");
	scanf("%d",&n);
	int a[n];
	printf("Enter array");
	for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		
	x=findlargest(a,n);
	
	printf(" The largest element in the array is %d",x);
	return 0;
}
