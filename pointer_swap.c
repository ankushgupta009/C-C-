#include<stdio.h>
int main()
{
    int a,b,*p,*q,temp;
    p=&a;
    q=&b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("%d%d",*p,*q);
return 0;
}   