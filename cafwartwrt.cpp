/*wap to find the sum of the following series:
1+10+101+1010......+upto n terms*/
#include<stdio.h>
int main(){
	int n,i=1,sum=0,term=1;
	printf("enter number of terms");
	scanf("%d",&n);
	while(i<=n){
		printf("%d",term);
		sum=sum+term;
		if(i%2==1)
		term=term*10;
		else
		term=term*10+1;
		i++;
	}
	printf("\nsum=%d",sum);
	return 0;
}
