// Calculate Total and Average Marks of 5 Subjects.
#include<stdio.h>
int main()
{
    int phy,che,math,hindi,eng,total,avg;
    printf("Enter the marks of 5 subject");
    scanf("%d%d%d%d%d",&phy,&che,&math,&hindi,&eng);
    total= phy+che+math+hindi+eng;
    printf("Marks is %d",total);
    avg=total/5;
    printf("\nAvg is %d",avg);
return 0;
}