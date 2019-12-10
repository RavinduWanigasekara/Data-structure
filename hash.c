#include<stdio.h>

struct Hash{
	int value;
	int key;
	//struct Hash *next;
};

void main()
{
	int size,i,temp,j;
	printf("Enter the hash table size : ");
    scanf("%d",&size);
	struct Hash hash_table[size];
	/*while(j<size)
	{
		hash_table[j].next=NULL;
		j++;
	}
	j=0;
	while(j<size)
	{
		hash_table[j].value=-1;
		j++;
	}*/
	
    printf("Enter the Elemenet : ") ;
	
	for(i=0;i<size;i++)
	{
	  scanf("%d",&temp);
	  hash_table[temp%size].value=temp;
	  hash_table[temp%size].key=temp%size;
		
	}	
	printf("\n");
    
    display(hash_table,size);	
	search(hash_table,size);
	insert(hash_table,size);
	display(hash_table,size);	
}

void display(struct Hash array[],int size)
{
	int i;

	printf("value\tkey\n");
    for(i=0;i<size;i++)
    {
    	printf("%d\t%d\n",array[i].value,array[i].key);
 /*   	struct Hash *ptr;
    	ptr=array[i].next;
    	while(ptr!=NULL)
    	{
    		printf("%d\t",ptr->value);
    		ptr=ptr->next;
		} */
				printf("\n");
	}
	
	
}

void search(struct Hash array[],int size)
{
	int element;
	printf("enter the element u want to search: ");
	scanf("%d",&element);
	if(array[element%size].value==element)
	{
		printf("element in - %d\n",element%size);
	}
	else{
		printf("there isnt element \n");
	}
}


void insert(struct Hash array[],int size)
{
	int input;
	printf("Enter the element you want to insert : ");
	scanf("%d",&input);
	//if(array[input%size].value==-1)
	//{
	array[input%size].value==input;
	//}
/*	else{
		struct Hash *nHash;
		nHash =(struct Hash *)malloc(sizeof(struct Hash *));
	    nHash->value=input;
	    nHash->next=NULL;
	    array[input%size].next=nHash;
		
		
	} */
	}















