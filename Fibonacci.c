#include<stdio.h>
int main()
{
    // 0 1 1 2 3 5 8 .....N
    int a=0,b=1,c,n,i;
    printf("enter the range");
    scanf("%d",n);
    for(i=1;i<=n;i++) // 2<=n , 3<=n , 
    {
        printf("%d",a); // 0 , 1 , 1
        c=a+b; // 0+1=1 , 1+1=2 
        a=b; // a=1 , a=1
        b=c; // b=1 , b=2
    }
return 0;
}