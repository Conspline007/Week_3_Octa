#include <stdio.h>

int main()
{
   int n,i,t,t1=0;
   printf("enter the value of n \n");
   scanf("%d",&n);
   while (n!=0)
   {
   	 t1++;
   	 t=n%10;
   	 n/=10;
   }
   printf("The length of this number is %d",t1);
   return 0;     
}
