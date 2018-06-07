
/*The purpose of this program is to get a number from the user and extract the components of the number based on its whole value, sign, and decimal number throgh the manipulation of pointers and functions*/
/* Example:     User= -3.14         Display:
											-
											3
											0.14                        */



#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
	int n;  /* n represents the whole value, d represents the value user inputs, f represents the decimal value, sign represnts the +/- of the number*/           
	double d,f;
	char sign;
	scanf("%lf",&d); /* user inputs number*/ 
	sign= split(d,&n,&f); /*function is activated*/
	printf("%c\n",sign);
	printf("%d\n",n); 
	printf("%lf",f);
	return(0);
					}
					
					
	int split( double d,int*n,double*f)  /* Within a function, there could only be one true result, therefore I decided to create the sign variable as the true result while the other values are pointer variables*/	
	 {
		int s;
		if(d>0)   /* Sign can only be positive if the user inputs a number greater than 0*/
		{
			s='+';
					}
					
		else 
		if(d<0)         /* Sign can only be negative if the user inputs a number less than 0*/           
		{
			s='-';
					}
		
		*n= abs(d);   /* to get the whole number abs(x) must be used*/
		*f= fabs(d)- *n; /* calculation to get the decimal number*/
		return(s);    /*sign of the number is sent back to the the main function*/
					}
	

