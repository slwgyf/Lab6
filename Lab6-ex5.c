#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = "hey";
    //free(a); you can not free a in this program
    a = "hello";   
    printf("%s\n",a);
}
