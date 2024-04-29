// #include<stdio.h>
// int sum(int x, int y);
// int main()
// {
//     int a,b,s;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     printf("Enter the value of b: ");
//     scanf("%d",&b);
//     s=sum(a,b);
//     printf("%d",s);

// return 0;
// }       

// int sum(int x,int y);
// {
//     return x+y;
// }




// #include<stdio.h>
// int sum(int x, int y);
// void printTable(int n);
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printTable(n); //arguments

// return 0;
// }       


// int sum(int x,int y)
// {
//     return x+y;
// }
// void printTable(int n) //parameters
// {
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d \n",i*n);
//     }
// }



// write function to calculate area of square,a circle and a rectangle.
#include<stdio.h>
void squareArea(float side);
void CircleArea(float rad);
void RectangleArea(float l , float b);
int main()
{
    float l=5.0,b=10.0;
    RectangleArea(l,b);
    
return 0;
}   

void squareArea(float side)
{
    printf("%f",side*side);
}



void CircleArea(float rad)
{
    printf("%f",3.14*rad*rad);
}

void RectangleArea(float l, float b)
{
    printf("%f",l*b);
}






