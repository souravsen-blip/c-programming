/*wac to calculate the electircity bill based on the number of units consumed the charges
 are:-
 0-100:-rupees 2
 101-200;- 3 rupees
 201-300:- 5 rupees
 above 300 : 7 rupees*/
 #include<stdio.h>
 int main(){
 	int unit,bill;
 	printf("enter units:-\n");
 	scanf("&d",&unit);
 	if(units<=100)
 	bills= units*2;
 	elseif(unit<=200)
 	bills=units*3;
 	elseif(units<=300)
 	bills=units*5;
 	else
 	bills=7*units;
 	printf("%d rupees to be paid :- \n",bill);
 	return 0;
 }
