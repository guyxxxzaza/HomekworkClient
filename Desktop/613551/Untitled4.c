#include<stdio.h>
int main()
{	int x,y;
 	printf("Enter number: ");
 	scanf("%d",&x);
 	printf("Enter number: ");
 	scanf("%d",&y);
 	printf("x+y = %d \n",x+y);
 	printf("y+x = %d \n",y+x);
 	printf("x-y = %d \n",x-y);
 	printf("y-x = %d \n",y-x);
 	printf("x*y = %d \n",x*y);
 	printf("y*x = %d \n",y*x);
 	printf("x/y = %d \n",x/y);
 	printf("y/x = %d \n",y/x);
 	printf("x%%y = %d \n",y%x);
 	printf("y%%x = %d \n",y%x);
 	printf("x*y+x = %d\n",x*y+x);
 	printf("x*(y+x)= %d\n",x*(y+x));
 	
 	/*printf("%d %d %d %d\n",x+y,y+x,x-y,y-x);
 	printf("%d %d %d %d\n",x*y,y*x,x/y,y/x);
 	printf("%d %d %d %d\n",x%y,y%x,x*y+x,x*(y+x));*/
	return 0;
}
