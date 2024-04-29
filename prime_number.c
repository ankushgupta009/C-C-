#include<stdio.h>
int main()
{
    // prime is which is divisible by its own no. or which is divisible by 1:
    int n,i,count=0;
    printf("enter the value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("its a prime no.");
    }
    else
    {
        printf("not a prime no.");
    }
return 0;
}   