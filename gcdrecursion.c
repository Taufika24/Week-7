#include <stdio.h>

int gcd(int x,int y,int i)
{
    if(x%i==0 && y%i==0)
        return i;
    if(i==0)
        return 1;
    else{
        i--;
        return gcd(x,y,i);
    }
    
}
int main()
{
    int a,res;
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    if(x>y)
        a=y;
    else
        a=x;
        
    res=gcd(x,y,a);
    printf("GCD of given numbers is %d",res);
    
    return 0;
}
