#include <stdio.h>
int main(void)
{ int year, week, day, month,ndays;
printf("Input number of days : ");
scanf("%d", &ndays);
year=ndays/365 ;
month=ndays/365/30%7 ;
week=ndays %365%30/7 ;
day= ndays %365%30%7 ;
printf("It is equivalent to %d year %d month %d week and %d day \n",year,month,week,day );
system("PAUSE");
return 0;
}
