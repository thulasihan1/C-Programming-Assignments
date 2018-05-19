
/* This program will allocate a file and identify if the follwoing systolic and diastolic blood pressures are satisfied. The first number and every other odd number is systolic blood pressure. The second number and every other even number is diastolic blood pressure. */
/* Example: File contains; 210 4 120 80 135 95 110 83 135 85 */



#include<stdio.h>
#include<math.h>
int main(void)
{
	int s,d; /*s represents systolic blood preesure and d represents diastolic blood pressure */
	FILE*in;
	in=fopen("monitor.dat","r"); /* Opening the file*/
	while(!feof(in)) /* We don't know how much data is contained within the file therefore an EOF loop will solve the solution*/
	{
		fscanf(in,"%d %d",&s,&d); /* Reading the systolic pressure first then the diastolic pressure from the file */
		if(s>140 || d>190)        /* Ranges of systolic and diastolic pressures */
		{
			printf("WARNING!\n");   /*A Warning will appear if the systolic or diastolic pressure value is beyod their range */
								}
								
										}
										
		fclose(in);/* closing the file */
		return(0);
										}

