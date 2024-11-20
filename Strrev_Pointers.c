#include <stdio.h>
int main()
{
	char chr[10]="hello";
	char *ch=&chr;
	int i,j,count=0;
	char k;
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]);
		count++;
	}
	printf("\n");
	
	for(j=0;j<count/2;j++)
	{
		k=ch[j];
		ch[j]=ch[count-j-1];
		ch[count-j-1]=k;
	}
	
	printf("%s",ch);
return 0;
}
