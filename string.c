// puts--> output
// gets--> input
// Pre define function
// strlen()
// strlwr()
// strupr()
// strcat()
// strcpy()
// strcmp() used in if-else statement 
// strrev()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str2[40];
    puts("Enter the string");
    gets(str);
    printf(strupr(str));
    // puts("Enter the string2");
    // gets(str2);
    // if(strcmp(str,str2)==0)
    // {
    //     puts("strings are equal");
    // }
    // else
    // {
    //     puts("strings are not equal");
    // }
    // strcat(str,str2); // Merge 
    // puts(str);
    // strcpy(str2,str); //Copy
    // puts(str2);
    // printf("%d",strlen(str)); length

return 0;
}
