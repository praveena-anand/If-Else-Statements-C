// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>
#include <string.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	struct Months 
	{
		int month;
		int days;
		char name[10];
	};
	
	int days30 = 30;
	int days31 = 31;
	int days28 = 28;
	
	struct Months January;
	January.month = 1;
	January.days = days31;
	strcpy(January.name, "January");
	
	struct Months February;
	February.month = 2;
	February.days = days28;
	strcpy(February.name, "February");
	
	struct Months March;
	March.month = 3;
	March.days = days31;
	strcpy(March.name, "March");
	
	struct Months April;
	April.month = 4;
	April.days = days30;
	strcpy(April.name, "April");
	
	struct Months May;
	May.month = 5;
	May.days = days31;
	strcpy(May.name, "May");
	
	struct Months June;
	June.month = 6;
	June.days = days30;
	strcpy(June.name, "June");
	
	struct Months July;
	July.month = 7;
	July.days = days31;
	strcpy(July.name, "July");
	
	struct Months August;
	August.month = 8;
	August.days = days31;
	strcpy(August.name, "August");
	
	struct Months September;
	September.month = 9;
	September.days = days30;
	strcpy(September.name, "September");
	
	struct Months October;
	October.month = 10;
	October.days = days31;
	strcpy(October.name, "October");
	
	struct Months November;
	November.month = 11;
	November.days = days30;
	strcpy(November.name, "November");
	
	struct Months December;
	December.month = 12;
	December.days = days31;
	strcpy(December.name, "December");
	
	int m;
	printf("Enter Month Number : ");
	scanf("%d", &m);
	
	if (m == 1)
		printf("%s : %d", January.name, January.days);
		
	else if (m == 2)
		printf("%s : %d", February.name, February.days);
		
	else if (m == 3)
		printf("%s : %d", March.name, March.days);
	
	else if (m == 4)
		printf("%s : %d", April.name, April.days);
		
	else if (m == 5)
		printf("%s : %d", May.name, May.days);
		
	else if (m == 6)
		printf("%s : %d", June.name, June.days);
		
	else if (m == 7)
		printf("%s : %d", July.name, July.days);
		
	else if (m == 8)
		printf("%s : %d", August.name, August.days);
		
	else if (m == 9)
		printf("%s : %d", September.name, September.days);
		
	else if (m == 10)
		printf("%s : %d", October.name, October.days);
		
	else if (m == 11)
		printf("%s : %d", November.name, November.days);
		
	else if (m == 12)
		printf("%s : %d", December.name, December.days);
		
	else
		printf("Invalid Input");
		
	return 0;
	
}
