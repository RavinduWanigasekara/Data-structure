#include<stdio.h>


int main()
{
   int n,f;
   printf("Enter your number : - ");
   scanf("%d",&n);
   if(n<0)
   {
   	printf("number not valid");

   }	
   else
   {
	f=factorial(n);
	printf("%d factorial is - %d",n,f);
   }	
	
	
}

int factorial(int n)
{
  if (n==0)
  {
   return 1;
   	
  }
  else
  {
  	return (n*factorial(n-1));
  }
  
  	
	
	
}
