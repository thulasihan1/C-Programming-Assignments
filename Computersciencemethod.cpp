



/* The purpose of this computer science method is to create a 2-D array by using a set of pointers that are able to dynamically allocate the values of the array*/


#include<stdio.h>
int main(void)
{
	int i,j, r,c;  /* i and j represent the incremtntal value, r represnts rows, and c represnts columns*/
	int **array;
	scanf("%d %d",&r,&c);
	array=(int**)calloc(r,sizeof(int*));
	for(i=0;i<c;i++)                                  /* allows me to put r and c within the size of the array*/
	
	array[i]=(int*)calloc(c,sizeof(int));  
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);   /*access the elemnts of rows and columns by using a 2-d array*/
			
											}
										
											}
												
												
												

			for(i=0;i<c;i++)
				
			free(array); 
			free(array[i]);   /* release from Heap memory within a loop*/
			return(0);
			
											}

