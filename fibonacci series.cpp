/*wap 0,1,1,2,3,5,8...upto n terms to display the given sequence*/
#include<stdio.h>
 int main(){
	int n,i=1;
	int a=0,b=1,c;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	 return 0;
}
