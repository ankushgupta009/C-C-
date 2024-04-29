// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("Enter the array elements:- ");
//     for(i=0;i<5;i++)
//     {   
//         scanf("%d",&a[i]);
//     }
//     printf("\n Array elements are:- ");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
// return 0;
// }

// In Reverse order
// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("Enter the array elements:- ");
//     for(i=0;i<=4;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n Array elements are:- ");
//     for(i=4;i>=0;i--)
//     {
//         printf("%d ",a[i]);
//     }
// return 0;
// }


// c program to insert element at any position of array

#include<stdio.h>
int main()
{
    int a[100],size,i,pos,item;
    printf("Enter the size of the array:-");
    scanf("%d",&size);
    printf("Enter the element of the array:- ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position:- ");
    scanf("%d",&pos);
    printf("Enter the element that you want to insert:- ");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1]; 
    }
    a[pos]=item;
    size++;
    printf("Resultant array is:- ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}


// c program to copy one array elements to another:-

// #include<stdio.h>
// int main()
// {
//     int a1[100],a2[100],n,i;
//     printf("\nEnter the size of array:-");
//     scanf("%d",&n);
//     printf("\nEnter the array elements:-");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a1[i]);
//     }
//     printf("\nFirst array elements:- ");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a1[i]);
//     }
//     printf("\ncopying the 1st array elements to second array elements:-");
//     for(i=0;i<n;i++)
//     {
//         a2[i]=a1[i];
//     }
//     printf("\nsecound array elements is:-");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a2[i]);
//     }
//     return 0;
// }

// C Program to Calculate Sum of Array Elements 

// #include<stdio.h>
// int main()
// {
//     int a[5],i,sum=0;
//     printf("enter the array element:-");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Sum of array element:-");
//     for(i=0;i<5;i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("%d ",sum);
// return 0;
// }


// find the max:-
// #include<stdio.h>
// int main()
// {
//     //  10 20 30 40 50 
//     int a[100],i,size,max;
//     printf("enter the size of array: ");
//     scanf("%d",&size);
//     printf("enter the element in array: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     max=a[0];    // max=10
//     for(i=0;i<size;i++) // 1<5(T)   2<5(T)
//     {
//         if(a[i]>max)  //a[0]>10 --> 10>10(F)     a[1]>10 --> 20>10(T)
//         {
//             max=a[i]; // max=20
//         } 
//     }
//     printf("Max value is:-  %d ",max);
// return 0;
// }


//ascending and decending:-
// ascending order:-
// #include<stdio.h>
// int main()
// {
//     int a[5],i,j,temp;
//     printf("Enter the array elements:- "); // 2 1 5 3 4
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);  
//     }
//     for(i=0;i<5;i++) //i=0
//     {
//         for(j=i+1;j<5;j++) //j=1
//         {
//             if(a[i]>a[j]) //a[0]>a[1] (T)
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("ARRAY ELEMENTS ARE:-");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);  
//     }
// return 0;
// }

// decending order:-
// #include<stdio.h>
// int main()
// {
//     int a[5],i,j,temp;
//     printf("Enter the array elements:- "); // 2 1 5 3 4
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);  
//     }
//     for(i=0;i<5;i++) //i=0
//     {
//         for(j=i+1;j<5;j++) //j=1
//         {
//             if(a[j]>a[i]) //a[0]>a[1] (T)
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("ARRAY ELEMENTS ARE:-");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);  
//     }
// return 0;
// }

// searching:-