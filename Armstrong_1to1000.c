#include<stdio.h>

main()

{

	int i,n,sum,num,cube=1,r;                 // definiationn and declaration of variables

	printf("Armstrong numbers between 1 to 1000:\n");



	for(num=1;num<=1000;num++)                           // rotationg loop from 1 to 1000

	{

		for(n=num,sum=0;n;n=n/10)                      //taking each num individually

		{

      r = n % 10;                     // Armstrong num logic starts here   

			cube = r*r*r;

			sum = sum + cube;

		}  



		if (num == sum)                       // checking the armstrong number condition 

			printf("%d ",num);

	}

	printf("\n");

}
