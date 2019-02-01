#include <stdio.h>
#include <stdlib.h>
int main()
{ char course1[] = "Physics I";
int credit1=3, sec1=3;
char course2[] = "Math I";
int credit2=3, sec2=12;
char course3[] = "Chemistry";
int credit3=3, sec3=5;
char course4[] = "Intro to Computer Prog";
int credit4=3, sec4=8;
char course5[] = "Table Tennis";
int credit5=1, sec5=04;
char grade1, grade2, grade3, grade4, grade5;
float gpa=0.0, totalcredits=1.0;
printf("Enter grade(A-E) for each course\n");
printf("%s\n",course1);
printf("grade =");
scanf("%c",&grade1);
fflush (stdin);
printf("%s\n",course2);
printf("grade = ");
scanf("%c",&grade2);
fflush (stdin);
printf("%s\n",course3);
printf("grade = ");
scanf("%c",&grade3);
fflush (stdin);
printf("%s\n",course4);
printf("grade = ");
scanf("%c",&grade4);
fflush (stdin);
printf("%s\n",course5);
printf("grade = ");
scanf("%c",&grade5);
fflush (stdin);


printf("\n\n GRADE REPORT\n");
printf("--------------------------------------------\n");
printf("# Course     section     Credit     Grade\n");
printf("--------------------------------------------\n");
printf("1 %-25s %2d   %d     %-5c\n",course1,sec1,credit1);
printf("2 %-25s %-10d   %-5d     %-5c\n",course2,sec2,credit2);
printf("3 %-25s %-10d   %-5d     %-5c\n",course3,sec3,credit3);
printf("4 %-25s %-10d   %-5d     %-5c\n",course4,sec4,credit4);
printf("5 %-25s %-10d   %-5d     %-5c\n",course5,sec5,credit5);
printf("---------------------------------------------\n\n");
totalcredits = 1 ; /* ?????????????????????????????????? */
/* ????????????? GPA ??????? 5 ???? ?????????? */
gpa = ( credit1*('E'-grade1)+credit2*('E'-grade2)+
credit3*('E'-grade3)+ credit4*('E'-grade4)+
credit5*('E'-grade5) )/totalcredits;
printf("\n GPA = %f\n",gpa);
printf("-----------------\n\n");
system("PAUSE");
return 0;
}
