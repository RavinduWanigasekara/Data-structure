#include<stdio.h>



int main()
{   
    int arraysize;
    printf("Enter arraysize - ");
    scanf("%d",&arraysize);
	int i,n,arr[arraysize];
    int index;
	printf("Enter numbers - ");
	for(i=0;i<arraysize;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("Array is-\n");
	for(i=0;i<arraysize;i++)
	{
		printf("%d\t",arr[i]);
    }
	printf("\n");
	printf("Enter the number you want delete - \n");
	scanf("%d",&n);
	for(i=0;i<arraysize;i++)
	{
		if(arr[i]==n)
		{
			index=i;
			break;             
		}
	}
	for(i=index+1;i<arraysize;i++)
       {
	      arr[i-1]=arr[i];
       }
       arraysize--;
    printf("Array is-\n");
	for(i=0;i<arraysize;i++)
	{
		printf("%d\t",arr[i]);
    }
}
