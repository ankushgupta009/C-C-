// #include<stdio.h>
// int main()
// {
//     int mat[2][2],i,j;
//     printf("enter the elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("array elements are:\n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat[i][j]);
//         }
//         printf("\n ");
//     }
   
// return 0;
// }

// c program to swap two matrices using 2D array :-
#include<stdio.h>
int main()
{
    int mat1[2][2],mat2[2][2],i,j,temp[2][2];
    printf("Enter the value of first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the value of secound matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("first martix before swapping\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",mat1[i][j]);
        }
        printf("\n ");
    }
    printf("secound matrix without swapping: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",mat2[i][j]);
        }
        printf("\n ");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            temp[i][j]= mat1[i][j];
            mat1[i][j] = mat2[i][j];
            mat2[i][j] = temp[i][j];

        }
    }
    printf("first matrix with swap elements\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",mat1[i][j]);
        }
        printf("\n ");
    }
    printf("secound matrix with swap elements\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",mat2[i][j]);
        }
        printf("\n ");
    }
return 0;
}   