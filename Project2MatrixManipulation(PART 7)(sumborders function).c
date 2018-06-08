
/*(Read PART 1)The purpose of this function is to take the sum of the borders without any overlaps within the corners of a matrix*/
/*Example:  5 6 7
            4 1 2           Display: 5+6+7+9+0+3+4+2=36
	    9 0 3

																		*/


double sumborders(double array[][200], int r,int c) /* the values of the matrix, amount of rows and columns are stored within a function called sumborders*/
{
	int i,j;
	double sum=0;
	for(i=0;i<r;i++)       /* A series of if statements and for loops are presented within the function of this program, inorder to calculate the borders without
							any overlaping wihin the corners,*/
							/* take addition of the first and last row then take the addition of the numbers of the first and last columns within the domain of first and last rows*/
		if(i==0||i=r-1)
		{
		for(j=0;j<c;j++)
		{
			sum=sum+array[i][j];
									}
									
										}
										
		if(i!=0 && i!=r-1)
		{
			sum= sum+array[i][0] + array[i][c-1];
												}
												
													}
													
		return(sum);      /* the sum of the borders if returned to the main function*/
						}

