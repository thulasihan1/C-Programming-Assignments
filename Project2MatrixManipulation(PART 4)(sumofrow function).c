
/*(Read PART 1 before you see this program)The purpose of this function is to identify the specific row number within the file and to add all the values within that row*/
		
/*	  	  
		       3 3
		 Ex.   5 6 7
		       2 2 4           Display: Row number: 2->2+2+4=8
			4 4 3 
			2
			3                       */
				






double addrow(array[][200], r,c,r1) /* The number of rows, the number of columns, and the specific row number is stored within a function called addrow*/
{
	int i,j;
	double sum;                      /*sum represnts the sum of all values in that row within a matrix*/
	for(i=0;i<r;i++)
	{
		if(i==r1-1)                 /* This nested for loop and if statement system is presented in order to go through all the rows until it reaches to the specific row mentioned in the file*/
		{
			for(j=0;j<c;j++)
			{
				sum=sum+array[r1-1][j];
										}
											
											}
											
												}
	return(sum);                                      /* sum of values within that row are retured to the main function*/
		
										}

