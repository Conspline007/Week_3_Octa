#include <stdio.h>

int  main()
{
	int i,n,s=0;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
    s+=i;
	printf("%d",s);
	return 0;
}
