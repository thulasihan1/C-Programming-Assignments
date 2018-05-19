#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;  /* i represents the number of iterations within the columns and n represents the multiple of 3 */
	n=3;             /* Matrix starts at 3*/
	while(n<99)     
	{
		for(i=1;i<=5;i++)     /* The for loop is used to have iterations for the number of columns*/
		{
			if(n!=102 && 105)   /*Full 5 columns will go beyond 99 therefore this if statemnt will avoid these last two numbers within the last row */
			{
				printf("%d\t ",n);
				n=n+3;              /* Multiples of 3 increase by adding 3 each time*/     
						}
		
								}
								
					printf("\n");              /*New line after 5 numbers within a row*/
							
										}	 
	
		return(0);
								}
		

