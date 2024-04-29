// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++) // 1<=5(T)  2<=5(T) 3<=5(T)
//     {
//         for(j=1;j<=i;j++) // 1<=1(T) 2<=1(F) 1<=2(T) 2<=2(T) 3<=2(F) 2<=3(T)
//         {
//             printf("*"); // *
//             //              * *
//             //              *
//         }
//         printf("\n"); 
//     }
// return 0;
// }


//  reverse this
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++) 
//     {
//         for(j=5;j>=i;j--) 
//         {
//             printf("*"); 
                          
//         }
//         printf("\n"); 
//     }
// return 0;
// }



// next patten:-
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++) //rows
    {
        for(j=i;j<5;j++) //space
        {
            printf(" ");

        }
        for(k=1;k<=i;k++) //coloum
        {
            printf("*");
        }
        printf("\n"); 
    }
return 0;
}


// reverse this patten :-
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++) //rows
//     {
//         for(j=1;j<i;j++) //space
//         {
//             printf(" ");

//         }
//         for(k=i;k<=5;k++) //coloum
//         {
//             printf("*");
//         }
//         printf("\n"); 
//     }
// return 0;
// }