//write a c forumla to calculate simple interest//
#include<stdio.h>
int main()
{
	float p,r,t;
	float si;
	printf("enter the principle:  \n");
	scanf("%f",&p);
		printf("enter the rate:  \n");
			scanf("%f",&r);
			printf("enter the time:  \n");
				scanf("%f",&t);
				si=(p*r*t)/100;
				printf("simple interest :%f \n",si);
}
