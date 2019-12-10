#include<stdio.h>

struct Hash{
	int value;
	int key;
};

void main(){
	

	int temp,size,i;
	printf("Enter the hash table size : ");
    scanf("%d",&size);
	printf("Enter the Elemenet : ") ;
		struct Hash hash_table[size];

	for(i=0;i<size;i++)
	{
	  scanf("%d",&temp);
	  hash_table[temp%size].value=temp;
	  hash_table[temp% size].key=temp % size;
		
	}	
	printf("\n");
   
   
	
	
	
}


