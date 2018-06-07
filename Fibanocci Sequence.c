/*The purpose of the program is to ask the user for the size of the fibbaonaci sequence which the want to encounter*/    
/* Fiabbonci sequence: 1  1   3   5   8  13  21....*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int x=1,y=1,a,i,size;    /* x represents the first number in the fibannoci sequence, y represnts the second number of the sequence, 
							a is the output value, i is an incremental for the loop, size is the amount of terms within the sequence*/
	scanf("%d",&size);
	printf("\n%d %d",x,y);
	for(i=0;i<size;i++)
	{
		a=x+y;               /*This system for the fibanocci sequence allows the terms to be shifted in order to get the next term*/
		printf(" %d ",a);
		x=y;
		y=a;
						}
			
			
			return(0);	  	  	  
						
						}
	

