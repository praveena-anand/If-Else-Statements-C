// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	int n; 

	printf("Enter a Number : "); 
	scanf("%d", &n);
	
	if (n % 2 == 0)
	{
		printf("Even Number\n");
		
		if (n % 6 == 0)
			printf("Divisible by 6\n");	
			
		else
			printf("Not Divisible by 6\n");		
	} 
	
	else
	{
		printf("Not Even Number i.e., Odd Number\n");
		printf("Not Divisible by 6\n");
	}
	
	return 0;
	
}
