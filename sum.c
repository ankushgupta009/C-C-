#include<stdio.h>
int main()
{
    int n1,n2,s=0; //2 8
    printf("Enter two no. ");
    scanf("%d%d",&n1,&n2);
    while(n1<=n2)
    {
        s=s+n1;
        n1=n1+1;
    }
    printf("sum b/w two no. is %d",s);
return 0;
}   