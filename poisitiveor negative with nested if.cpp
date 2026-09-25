/*wac which read an integer value and check whether it is positive or not after satisfying the integer value <0.  
if it is positive then check whether it is odd or even*/

#include<stdio.h>
int main(){
int n;
printf("enter a value:-");
scanf("%d",&n);
if(n>0){	
printf("positive \n");
if(n%2==0)
printf("number is even");
else
printf("number is odd");
}
else if(n<0)
printf("negative \n");
else
printf("entered number is zero. \n");	
	return 0;
}

