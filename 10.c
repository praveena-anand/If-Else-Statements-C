// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	float units, surcharge;
	float bill = 0.00;
	
	printf("Enter the Number of Units Consumed : ");
	scanf("%f", &units);
	
	if (units <= 50)
		bill = units * 0.5;
	else if (units <= 150)
		bill = 50 * 0.5 + (units - 50) * 0.75;
	else if (units <= 200)
		bill = 50 * 0.5 + 50 * 0.75 + (units - 150) * 1.2;
	else
		bill = 50 * 0.5 + 50 * 0.75 + 100 * 1.2 + (units - 250) * 1.5;
		
	surcharge = 0.2 * bill;
	bill += surcharge;
	
	printf("Your Total Bill Amount is : %.2f", bill);
	
	return 0;
}
