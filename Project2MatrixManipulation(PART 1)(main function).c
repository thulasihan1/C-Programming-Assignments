/*A data file contains real numbers that are to be read into a 2-D array. The first two
numbers in the file are not part of the data but are actually the number of rows and the
number of columns in that order. The last two numbers are also not part of the data and are
used to specify which row and which column will be used in calling the rows and column
functions (see below). A typical file will look like this:
3 6
2.3 6.77 6.5 3.4 2.19 2.123
4.4 6.77 8.9 3.9 3.24 4.567
3.6 4.55 1.5 3.4 8.44 9.542
2
4
The file will never be larger than 200 rows and 200 columns and never be smaller than 2
rows and 2 columns. */

#include<stdio.h>   /* This program is only the main function only other functions will come in seprate parts(other function have to also be treaded as global variables as well in case)*/
#include<math.h>
int main(void)
{							/*array[][] is the values within the matrix*/
							/*i and j are incremntal values for the for loops*/
	int r,c,r1,c1,i,j;     /* r represents the number of rows, c represents the number of columns, r1/c1 reprsents 
							which row and which column will be used in calling the rows and column functions*/
											
	double array[200][200];
	FILE*in;
	in=fopen("mydata.txt""r");       /*opening up the file*/
	fscanf(in, "%d %d", &r,&c);		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)			/*nested for loop statements allow the program to read every single value within the matrix*/
		{
			fscanf(in, "%lf",&array[i][j]);
								}
											}
											
											
											
	fscanf(in,"%d" "%d",&r1,&c1);
											
	fclose(in);     /*file is closed*/
	return(0);
				
							}
											
											
		

