#include <stdio.h>
#include <math.h>
int main()
{
   int n,i,t,t1=0,k;
   printf("enter the value of n \n");
   scanf("%d",&n);
   k=n;
   while (n!=0)
   {
   	 t1++;
   	 t=n%10;
   	 n/=10;
   }
   
   int k1,k2,s;
   k1=k%10;
   k2=k/pow(10,t1-1);
   s=k1+k2;
   printf("%d is the sum of 1st and last digits",s);
   return 0;     
}
