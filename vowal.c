#include<stdio.h>
int main()
{
    // a e i o u 
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Character %c is a vowal:",ch);
    }
    else
    {
        printf("Character %c is not a vowal:",ch);
    }
return 0;
}