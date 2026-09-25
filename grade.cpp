/*wacp to take input of marks a studentand display the grades according to the following conditions:-
if marks>=90,A
marks>=75 B
marks>=50,C
otherwise F */

#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks:");
	scanf("%d", marks);
	if (marks>=90)
	printf("grade A" );
	elseif( marks>=75)
	printf("grade B");
	elseif(marks>=60)
	printf("grade C");
	else
	printf("failed");
	return 0;
}

