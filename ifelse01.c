#include<stdio.h>
void main()
{
		float amt,dis,famt;
		
	printf("enter amount\n");
	scanf("%f",&amt);

	if(amt>1000)
	dis=amt*10/100;


	else if(amt<=500)
	dis=amt*5/100;
	
	else
	dis=0;
	famt=amt-dis;
	printf("final amount=%.2f\n",famt);
}