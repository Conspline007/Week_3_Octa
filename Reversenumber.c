#include <stdio.h>

int main()
{
   int n,t;
   printf("enter the value of n \n");
   scanf("%d",&n);
   printf("the reverse of the given number is \n");
   while (n!=0)
   {
   	 t=n%10;
   	 printf("%d",t);
   	 n/=10;
   }
   return 0;     
}
