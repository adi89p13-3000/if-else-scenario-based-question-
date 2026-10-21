#include<stdio.h>
void main()
{
	int age ;
	
	scanf("%d",&age);
	if(age<18)
	printf("premium=1000/n");
	else
	if(18<=age<=45)
	printf("premium=2000/n");
	else
	if(age>45)
	
	printf("premium=3000/n");
}