#include <stdio.h>
 
int main()
{
    char fileName[25];
    printf("Specify file name you would like to print to(enter z to quit): \n");
    scanf("%s",fileName);//removed & from infront of fileName
    //getchar();//add this to get the newline char after the scanf

    FILE* file1 = fopen(fileName, "w");
 
    char c;
 
    while ((c=getchar()) != 'z')//checked for a z rather than the end of the file
    {
        fprintf(file1, &c);
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
