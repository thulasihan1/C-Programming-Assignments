
/*(Read Part1 before you read this)The purpose of this function is to sum all 4 corners within a matrix*/
/* Ex. 5  6  7
       6  7  9            Display: 5+7+8+6= 26 
	   8  9  6   
															*/

double corners(array[][200],int r,int c) /*The array values, the amount of rows, and the amount of columns from the file are stored in a function called corners*/
{
	
	int i,j;                              /* i and j are incremntal values*/
	double cor;                            /* cor represents the sum of the corners*/
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
			if(i==0 && j==0)              /* A system of nested for loops with if statemnts which are presented in order to allocate the 4 corners of a matrix sequentially*/
			{
				cor= cor+array[i][j];
										}
			if(i==0 &&j=c-1)
			{
				cor=cor+array[i][j];
									}
			if(i==r-1 && j==0)
			{
				cor= cor+array[i][j];
									}
			if(i=r-1 && j=c-1)
			{
				cor=cor+array[i][j];
									}
			return(cor);								/*The sum ofthe corners is returned to the main function*/
						
							}

