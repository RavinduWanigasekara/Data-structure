#include<stdio.h>

int factorial(int n);

int main()
{
	int n,f;
	printf("enter number - ");
	scanf("%d",&n);
	
	f=factorial(n);
	printf("%d factorial is -%d",n,f); 
	
	
	
}

int factorial(int n)
{   if(n==0)
    {
    	return 1;
    }
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
	
	
	
	
	
}

