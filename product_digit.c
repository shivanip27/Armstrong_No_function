#include<stdio.h>
int prod_digit(int n);
main()
{
	int p,num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The product of %d is %d\n",num,prod_digit(num));

}

int prod_digit(int n)
{
	int mul=1,temp;
	while(n>0)
	{
		temp =n%10;
                mul = mul*temp;
		n=n/10;
	}
	return mul;
}
