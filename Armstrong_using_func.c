Armstrong number using Function

#include<stdio.h>
int cubesum(int n);
main()
{
	int num,sum=0;
	printf("Enter number:\n");
	scanf("%d",&num);
	sum = cubesum(num);
	if(sum == num)
	printf("Entered number is Armstrong num=%d\n",sum);
	else 
	printf("Entered number is not a Armstrong number\n");
	return 0;
}

int cubesum(int n)
{
	int d,cube,sum=0;
		if(n<=10)
		{
		        printf("Enter the num greater than 10\n");
			return 0;
		}
                else 
		{
			while(n)
			{	
			d= n %10;
			n/=10;
			cube = d*d*d;
			sum = sum + cube;
			}
			return sum;
		}
}
