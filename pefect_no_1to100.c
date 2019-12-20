#include<stdio.h>

void perfect_no(void);

main()

{

	int num,s=0;

	perfect_no();
}

void perfect_no(void)

{

	int i,j,sum=0;

	for(i=1;i<=100;i++)

	{

		for(j=1,sum=0;j<i;j++)

		{

			if(i % j==0)

				sum= sum +j;

		}

	if(i==sum)

	printf("%d ",i);

	}

	printf("\n");

}
