/* The purpose of the program is to extract a file of numbers(don't know how many) and to identlify the largest number within the file by using a function*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,array[1000],i=0,size=0,w; /* i is the incremntal value within the loop, array is the numbers within the file, size signifies the amount of 
										numbers in the file, w is the largest number*/
	
	FILE*in;                      
	in= fopen("mydata.txt","r");       /*opening up the file*/
	while(!fopen(in))                  /* This EOF loop helps us read as many numbers within  the file without knowing how many numbers there are*/
	{ 
		fscanf(in,"%d",array[i]);
		i++;
		size++;
				}
	
	w= largest(array, size);             /* The function is activated*/
	printf("%d",w);
	fclose(in);                           /*closing the file*/
	return(0);
				}
				
	
	
	int largest(array,size)
	{
		int maximum,i;
		array[0]=maximum;      /*The first number within the file is the largest number for now later on it might not be the largest number based on the if statement*/
		for(i=0;i<size;i++)
		{
			if(array[i]>maximum)    
			{
				maximum=array[i]; /*This for loop and if statement system allows the program to go through every number more efficently to identify largest number*/
								}
									}
									
									
			return(maximum);               /*The largest number is sent back to the main function*/
										}

