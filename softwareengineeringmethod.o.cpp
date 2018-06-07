#include<stdio.h>
int main(void)
{
	int i,j, r,c;
	int *array;
	scanf("%d %d",&r,&c);
	array=(int*)calloc(r*c,sizeof(int));
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i*c +j]);
			
											}
										
											}
												
												
												
												
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %d ",&array[i*c +j]);
			
											}
											
											}
	
	
				
			free(array);
			return(0);
			
											}

