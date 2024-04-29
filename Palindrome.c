#include<stdio.h>
int main()
{
    // 121 ---> 121
    int n,c,r,s=0;
    printf("enter any no, :");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if (c==s)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");

    }
    
return 0;
}   