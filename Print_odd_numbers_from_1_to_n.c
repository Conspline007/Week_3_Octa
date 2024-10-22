#include <stdio.h>

int  main()
{
	int i,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for (i=1;i<=n;i+=2)
	{
		printf("\n%d",i);
		printf("\n");
	}
	return 0;
}
