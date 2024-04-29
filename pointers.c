// void pointer:
// #include<stdio.h>
// int main()
// {
//     void *p;
//     // int a=10;
//     char b = 'A';
//     p=&b;
//     printf("%c",*(char *)p); // have to do type casting:
// return 0;
// }   

// NULL pointer:-
// #include<stdio.h>
// int main()
// {
//     int *p = NULL;
//     printf("%d",*p);
// return 0;
// }   

// wild pointer:
// #include<stdio.h>
// int main()
// {
//     int *p;
//     printf("%d",p);
// return 0;
// }   

// function pointer:
#include<stdio.h>
int Add()
    {
        int a,b;
        printf("Enter two no.");
        scanf("%d%d",&a,&b);
        return a+b;
    }
int main()
{
    int (*p)(),c;
    p=Add;
    c=p();
    printf("%d",c);
return 0;
}
