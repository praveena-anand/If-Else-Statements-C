// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	int year; 

	printf("Enter a Year : "); 
	scanf("%d", &year);
	
	if (year % 4 == 0)
		printf("%d is a Leap Year", year);
	else
		printf("%d is not a Leap Year", year);
	
	return 0;
}
