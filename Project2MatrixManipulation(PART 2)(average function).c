
/*After looking at Part 1 of the Matrix operation, the purpose of this function is to calculate the average of those values within the matrix*/




double average(double array[][200],int r,int c) /* the  values within the matrix, the number of rows and columns are stored within in a function called average*/
{
	int i,j,count=0; /* i and j are incremntal values for the for loop statements, count represnts the total amount of numbers within the matrix*/
	double sum=0,av; /* sum represents the addtion of the values from the matrix, av represents average*/
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) /* a nested for loop statement will help track the total amount of numbers throughout the matrix and the addition of them as well*/
		{
			sum=sum+array[i][j];
			count++;
					}
		
		av=sum/count;
		return(av);
					}
		

