



/* The purpose of this software method is to create a 2-D array by using a dynamically allocated 1-D array*/


#include<stdio.h>
int main(void)
{
	int i,j, r,c;  /* i and j represent the incremtntal value, r represnts rows, and c represnts columns*/
	int *array;
	scanf("%d %d",&r,&c);
	array=(int*)calloc(r*c,sizeof(int)); /* allows me to put r and c within the size of the array*/
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i*c +j]);  /*subscript calculation to access the elemnts of rows and columns*/
			
											}
										
											}
												
												
												
												
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",&array[i*c +j]);
			
											}
											
											}
	
	
				
			free(array);    /* release from Heap memory*/
			return(0);
			
											}

