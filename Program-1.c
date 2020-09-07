#include<stdio.h>
int main()
{
	char opt;
	double result=0;
	double first, second;
	printf("Choose the operator: (+, -, *, /): ");
	scanf("%c", &opt);
	printf("Enter first number: ");
	scanf("%lf", &first);
	printf("Enter secon number: ");
	scanf("%lf", &second);

	switch(opt){
		case '+':
			result=first+second;
			break;
		case '-':
			result=first-second;
			break;
		case '*':
			result=first*second;
			break;
		case '/':
			result=first/second;
			break;
		default:
			printf("Invalid operation.\n");
	}
	printf("Result: %lf %c %lf: %lf\n", first, opt, second, result);
	return 0;
}
