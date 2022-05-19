#include<stdio.h>
int SumOfDigits(int n) //.prototype of sum function
{
	if(n==0)
     	return 0;
	else
    	return n%10+SumOfDigits(n/10);
}
int main()
{
	int n,sum;
	printf("ENTER THE INPUT NUMBERS: ");
	scanf("%d",&n);
    sum=SumOfDigits(n);
	printf("\nSum of digits of %d is: %d",n,sum);
}
