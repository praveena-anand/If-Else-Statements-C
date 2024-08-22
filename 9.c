// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	float basicSalary;
	float HRA;
	float DA;
	float grossSalary;
	
	printf("Enter the Basic Salary : ");
	scanf("%f", &basicSalary);
	
	if (basicSalary <= 10000)
	{
		HRA = 0.2 * basicSalary;
		DA = 0.8 * basicSalary;
	}
	else if (basicSalary <= 20000)
	{
		HRA = 0.25 * basicSalary;
		DA = 0.9 * basicSalary;
	}
	else
	{
		HRA = 0.3 * basicSalary;
		DA = 0.95 * basicSalary;
	}
	
	grossSalary = basicSalary + HRA + DA;
	
	printf("The Gross Salary is : %.2f", grossSalary);
	
	return 0;
}
