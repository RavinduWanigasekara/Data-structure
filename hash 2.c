#include<stdio.h>

struct Hash{
	
	int value;
	int key;
	struct Hash *next;
};

int main()
{
	int i,size,temp,j;
	printf("enter the hash table size : ");
	scanf("%d",&size);
	struct Hash hash_table[size];
	while(j<size)
	{
		hash_table[j].next=NULL;
		j++;
	}
	while(j<size)
	{
		hash_table[j].value=-1;
	}
	printf("Enter the data : ");
	
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
}

void display(struct Hash array[],int size)
{
	int i;
	printf("values\tkey\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n",array[i].value,array[i].key);
	    struct hash *ptr;
	    ptr=array[i].next;
	    while(ptr!=NULL)
	    {
	    	printf("%d\t",ptr->value);
	    	ptr=ptr->next;
		}
	}
	
}

void search(struct Hash array[],int size)
{
	int i,se;
	printf("Enter the element u want to search :");
	scanf("%d",&se);
	if(array[se%size].value==se)
	{
		printf("element is : %d",se%size);
	}
	else{
		printf("there is not element\n");
	}
	
}

void insert(struct Hash array[],int size)
{   
    int insert;
	printf("enter th element u want to insert :");
	scanf("%d",&insert);
	if(array[insert%size].value==-1)
	{
		array[insert%size].value=insert;
	}
	else
	{
		struct Hash *nHash;
		nHash=(struct Hash *)malloc(sizeof(struct Hash));
		nHash->value=input;
		nHash->next=NULL;
		array[input%size].next=nHash;
	}
	
	
}

