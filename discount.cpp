/*write a c program to find the net payable amount after applying a discount .
If the amount is >=10000,the customer get discount of 10%, otherwise they will
get the discount of 5%.*/

#include<stdio.h>
int main(){
	float amt,dis,net;
	printf("enter the amount :-\n");
	scanf("%f",&amt);
	if(amt>=10000)
	dis=0.1*amt;
	else
	dis=0.05*amt;
	net=amt-dis;
	printf("the net payable amount is = %f \n",net);
	return 0;
}


