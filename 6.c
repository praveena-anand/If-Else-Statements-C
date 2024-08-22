// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	char ch;
	printf("Enter a Character : ");
	scanf(" %c", &ch);
	
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		printf("%c is a Alphabet.", ch);
	else
		printf("%c is not a Alphabet.", ch);
	
	return 0;
}
