// w.a.c.p to calclate sum of digits// 
#include<stdio.h>
int main(){
	int n,r,sum;
	printf("enter n");
	scanf("%d",&n);
	sum=0;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+r;
		
	}
	printf("sum=%d",sum);
	return 0;
}
