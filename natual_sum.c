#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the no. ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d",s);
return 0;
}
// without using loop 
#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter the no. ");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("%d",s);
return 0;
}