#include <stdio.h>
#include <math.h>

// error is identified waiting to be rectified
int main()
{
   int n,i=0,t,s=0,k;
   printf("enter the value of n \n");
   scanf("%d",&n);
   k=n;
   while (n!=0)
   {
   	i++; 
    t=n%10;
    s+=t*pow(10,(i-1));
   	n/=10;
   }
   if (s==k)
   printf("the given number is a palindrome number ");
   else
   printf("the given number is not a palindrome number");
   return 0;     
}
