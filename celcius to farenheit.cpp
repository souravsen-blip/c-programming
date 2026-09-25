// write a c program to convert celsius to fahrenheit//
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temp in celsius :\n");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("temp in fahrenheit =% f \n", f);
	return 0;
}


