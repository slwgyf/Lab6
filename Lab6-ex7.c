#include<stdio.h>
int main()
{
	int x=1309;
	int *p ;
	*p = 4;
	printf("\n The value of x is = %d",x);
	printf("\n The pointer points to the value = %d",*p);//can't print the value of a NULL pointer! so i made the value p is pointing to a number that can be printed
	return 1;
}
