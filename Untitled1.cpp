#include <stdio.h>
int main()
{
	int unit;
	float bill;
	printf("enter the units consumed \n");
	scanf("%d",&unit);
	if(unit<=100)
	bill=unit*2;
	else if(unit<=200)
	bill=(100*2)+(unit-100)*3;
	else if(unit<=300)
	bill=(100*2)+(100*3)+(unit-300)*5;
	else
	bill=(100*2)+(100*3)+(100*5)+(unit-300)*7;
	printf("your bill amt = %.2f",bill);
	return 0;
}
