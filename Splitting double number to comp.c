#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	char lol(double n, int *in, double *de)
	{
		char s;
		double x;
		
		
			if(n>0)
			{
				s= '+';
						}
			else 
			
			
			if(n<0)
			{
				s= '-';
						}
			
			
			x= fabs(n);
			 *in = floor(x);
			 *de= fabs(n) - *in;
			 return(s);
			 	   
					
									
										
											}


int main(void)
{
	double n;
	int in;
	double de;
	char s;
	scanf("%lf", &n);
	
	s= lol(n,&in,&de);
	
	printf("%c\n",s);
	printf("%d\n",in);
	printf("%lf\n",de);
	
						}
	
		
	
		
		
			
				
					
						
							
								
									
									
										
											
												

