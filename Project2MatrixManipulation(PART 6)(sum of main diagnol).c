
/*(Read Part 1) The purpose of this function is to find the sum of main diagnol for only square matrices*/


double diagnol(array[][200],r,c) /* values of matrix, the number of rows and columns are stored within a function called diagnol*/
{
	int i,j;
	double sum;
	if(r!=c)      /*This if statement allows to identify if the matrix is not a square matrix*/
	{
		printf("You can't find main diagnol");
							
											}
	else 
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)                          /*System of for loops and if statement are presnted inorder for the program to go through all the values and select values that are within the main diagnol*/
				{
					sum=sum+array[i][j];
										}
										
											}
											
												}
												
													}
				return(sum);            /*sum of the main diagnol is returned to the main function*/
								}

