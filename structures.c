#include <stdio.h>
struct student{
    int rno;
    struct dob
    {
        int d;
        int m;
        int y;
    }s2;
};
int main()
{
   struct student s1;
   printf("Enter roll number");
   scanf("%d",&s1.rno);
   printf("Enter date of birth");
   scanf("%d",&s1.s2.d);
   printf("Enter month of birth");
   scanf("%d",&s1.s2.m);
   printf("Enter year of birth");
   scanf("%d",&s1.s2.y);
   
   printf(" Roll number %d, DOB - %d-%d-%d",s1.rno,s1.s2.d,s1.s2.m,s1.s2.y);
   
return 0;
}
