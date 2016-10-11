#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(void)
{
	char s[20], *dyn_s;//set the length of s
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1);//did not derefrence dyn_s
	dyn_s = s;
	dyn_s[strlen(s)]='\0';
	printf("%s\n", dyn_s);//added %s\n to the printf
	return 0;
}

