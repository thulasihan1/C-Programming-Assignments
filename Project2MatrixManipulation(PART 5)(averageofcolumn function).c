/*(Read PART 1) The purpose of the function is to find the average of values in that specific column mentioned within the file*/








double avcols(double array[][200],int r,int c, int c1) /* the number of rows,the number of columns, and the specific column from the file is stored within a function called avcols*/
{
	int i,j,sum=0;count=0; /* count represnt the amount of numbers within that column*/
	double av;     /* av represnts average of values within the column*/
	for(j=0;j<c;j++)
	{
		if(j==c-1)                 /* This nested for loop and if statement is used to go through the matrix and allocate the specific column inorder to find average*/
		{
			for(i=0;i<r;i++)
			{
				sum= sum+array[i][c1-1];
				count++;
				av= sum/count;
								}
								
									}
									
										}
										
			return(av); /*average of values within the specific column is returned to the main*/
									
									
									
											}

