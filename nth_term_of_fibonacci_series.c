#include <stdio.h>

int main()
{
   int n,n1=0,n2=1,k,b,i;
   printf("Enter the value of n \n");
   scanf("%d",&n);
   if (n==1)
   printf("The 1st term of finacci series is 0");
   else if (n==2)
   printf("The 2nd term of finacci series is 1");
   else{
   for(i=1;i<=(n-1);i++)
   {
   	   k=n1+n2;
   	   b=k;
	   n1=n2;
   	   n2=k;
   	
   }
    printf("The required term is %d",b);
}
  
   return 0;     
}
