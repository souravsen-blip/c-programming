//write a c-program to calculate the area and perimeter of rectangle//
#include<stdio.h>
int main()
{
	int l,b;
	int area,peri;
	printf("Enter the length and breadth of the rectangle: \n");
	scanf("%d",&l);
		scanf("%d",&b);
		area=l*b;
		peri=2*(l+b);
		printf("Area= %d \n", area);
		printf( "perimeter= %d \n" ,peri);
		return 0;s
}
