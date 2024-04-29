#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("enter two no. ");
    scanf("%d%d",&a,&b);
    printf("enter your choose ");
    scanf("%d",&ch);
    if (ch==1)
    {
        c=a+b;
        printf("%d",c);
    }
    else if (ch==2)
    {
        c=a-b;
        printf("%d",c);
    }
     else if (ch==3)
    {
        c=a*b;
        printf("%d",c);
    }
    else if (ch==4)
    {
        c=a/b;
        printf("%d",c);
    }
    else if (ch==5)
    {
        c=a%b;
        printf("%d",c);
    }
    else
    {
       printf("invalid no. ");
    }
    

return 0;
}