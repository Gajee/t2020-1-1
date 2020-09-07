#include <stdio.h>
void main() 
{
	int x=0,a,i=1;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	if(a%2==0)
		x=a-1;
	else
		x=a;
	while (i<=x-1)
	{
		printf("%d,",i);
		i=i+2;
	}
	printf("%d",i);
}
