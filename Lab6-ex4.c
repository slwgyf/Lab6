 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char arr1[ 21 ] = "Trumantiger";//made arr1 a longer array than arr2 so the strcpy will work
    char arr2[ 20 ];
    while(i<19){
        arr2[ i ] = 'A';
	++i;
    }
    
    strcpy( arr1 , arr2 );
    printf("%s",arr1);
    return;
}
