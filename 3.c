//PRAVEENA ANAND [CH.SC.U4CSE23044] 
  
#include <stdio.h> 

int main() 
{ 
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
int n1, n2, n3; 

printf("Enter Number 1 : "); 
scanf("%d", &n1); 

printf("Enter Number 2 : "); 
scanf("%d", &n2); 

printf("Enter Number 3 : "); 
scanf("%d", &n3); 

if (n1 > n2 && n1 > n3) 
{ 
printf("%d is the Greatest.", n1); 
} 
else if (n2 > n1 && n2 > n3) 
{ 
printf("%d is the Greatest.", n2); 
} 
else if (n3 > n1 && n3 > n2) 
{ 
printf("%d is the Greatest.", n3); 
} 
else 
{ 
printf("All are equal."); 
} 

return 0; 
} 
