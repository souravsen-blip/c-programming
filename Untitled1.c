// WRITE A C PROGRAME TO PRINT EVEN NUMBER UPTO 10
#include<stdio.h>
int main(){
	int i=2,n;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
