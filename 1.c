// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	int age;
	char ch;
	
	printf("Enter your age : ");
	scanf("%d", &age);
	
	if (age >= 18 && age <= 57)
	{
		printf("Are your condition and norms satisfied? (Y/N) : ");
		scanf(" %c", &ch);
		
		if (ch == 'Y' || ch == 'y')
			printf("You are eligible for a job.\n");
		
		else if (ch == 'N' || ch == 'n')
			printf("You are not eligible for a job.\n");
			
		else
			printf("Invalid Input!");
	}
	
	else
		printf("You are not eligible for a job.\n");
		
	return 0;
}
