#include <stdio.h>

int  main()
{
	int i,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d ",n,i,n*i);
		printf("\n");
	}
	return 0;
}