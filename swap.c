// c program to swap two numbers :-
#include<stdio.h>
int main()
{   
    int a,b,temp;
    printf("Enter two numbers:- ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
return 0;
}
// another method is:-
#include<stdio.h>
int main()
{   
    int a,b;
    printf("Enter two numbers:- ");
    scanf("%d%d",&a,&b); // a=100 , b=200
    a=a+b; // a=100+200=300
    b=a-b; // b=300-200=100
    a=a-b; // a=300-100=200
    printf("a=%d b=%d",a,b);
return 0;
}