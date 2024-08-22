// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	int n1, n2, n3;
	
	printf("Enter n1 : ");
	scanf("%d", &n1);
	
	printf("Enter n2 : ");
	scanf("%d", &n2);
	
	printf("Enter n3 : ");
	scanf("%d", &n3);
	
	if (n1 == n2 && n2 == n3)
		printf("All 3 are equal.");
	else
		printf("All 3 are not equal.");
		
	return 0;
}
