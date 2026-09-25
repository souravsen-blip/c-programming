#include<stdio.h>
int main()
{
	float  c,f;
	printf("enter temp in fahrenhit: \n");
	scanf("%f",&f);
	c=(5*(f-32))/9;
	printf("temp in celsius : %f \n",c);
	return 0;
}
