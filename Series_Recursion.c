#include <stdio.h>
int series(n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if (n==2)
		return 2;
	else 
		return series(n-1)+series(n-2)+series(n-3);
}
int main()
{
	int num;
	printf("Enter n");
	scanf("%d",&num);
	int x=series(num);
	printf("%d",x);
}
