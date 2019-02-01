#include <stdio.h>
#include <stdlib.h>
int main()
{
char name[20];
float grade;
int sec;
printf("Enter your name\n");
scanf("%s",name);
printf("Enter your section\n");
scanf("%d",&sec);
printf("Enter your GPA\n");
scanf("%f",&grade);
printf("Hello %s, ",name);
printf("your section is %d and GPA is %.2f\n", sec,grade);
system("PAUSE");
return 0;
}
