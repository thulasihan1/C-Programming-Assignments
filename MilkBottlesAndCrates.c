
/* Question:If a milk crate fills 12 milk bottles then ask the user for the number of bottles then find 
the number of crates needed and the number of bottles in the last crate*/



#include<stdio.h>
#include<math.h>
int main(void)
{
	int b,c,l;   /* b is the number of bottles user inputs, c is the number of crates, l is the number of bottles in the last crate*/
	
	do{           /* This validation loop is created so the user is forced to eneter a number that is greater than zero*/
		scanf("%d",&b);
					}while(b<=0);
					
					
					
	if(b>0 && b<=12)              /* System of if statemnts is used to find the output of any number that is enetered within the domain of the program*/
	{
		c=1;
		l=b;
				}
				
				
	if(b>12 && b%12==0)
	{
		c=b/12;
		l=0;
					}
					
	
	if(b>12 && b%12!=0)
	{
		c= (b%12) +1;
		l=b%12;
					}
					
					
	printf("The number of crates needed is %d\n",c);
	printf("The number of bottles inn the last crate is %d",l);
					
					
					
		return(0);
									}

