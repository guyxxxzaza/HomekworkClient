#include<stdio.h>
int main()
{	int x,y;
 	printf("Enter number: ");
 	scanf("%d",&x);
 	printf("Enter number: ");
 	scanf("%d",&y);
 	printf("%d %d %d %d\n",x+y,y+x,x-y,y-x);
 	printf("%d %d %d %d\n",x*y,y*x,x/y,y/x);
 	printf("%d %d %d %d\n",x%y,y%x,x*y+x,x*(y+x));
return 0;
}

