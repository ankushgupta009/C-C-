#include<stdio.h>
int main()
{
    int *p,*q,a,b,add;
    p=&a;
    q=&b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    add = *p+*q;
    printf("%d",add);
return 0;
}   