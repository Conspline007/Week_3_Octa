#include <stdio.h>

int main()
{
   int n,t,s=0,k;
   printf("enter the value of n \n");
   scanf("%d",&n);
   k=n;
   while (n!=0)
   {
   	 t=n%10;
   	 s+=t;
   	 n/=10;
   }
   printf("The sum of digits of %d is %d",k,s);
   return 0;     
}
