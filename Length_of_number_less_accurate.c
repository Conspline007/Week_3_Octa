#include <stdio.h>
#include <string.h>
int main()
{
	while(1){
	int n;
	char buffer[100];
	printf("enter the value of n \n");
	scanf("%d",&n);
	printf("\n");
    sprintf(buffer,"%d",n);
    printf("%d",strlen(buffer));
	printf("\n");}
    
}



