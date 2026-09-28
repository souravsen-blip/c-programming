/*wap 2+5+8+11+14+....upto n terms to calculate sum of the given series*/
#include<stdio.h>
int main(){
int s=0,n;
scanf("%d",&n);
int i=2;
   while(i<=n)
{
		
	s+=i;
	i+=3;
}
printf("%d\n",s);
	return 0;
}
