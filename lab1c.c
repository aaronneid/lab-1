//Lab1 C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int operand1 = 0;
	int operand2 = 0;
	int result = 0;
	char operator;
	
	printf("Please input operand 1: \n> ");
	scanf("%d",&operand1);
	printf("Please input operand 2: \n> ");
	scanf("%d",&operand2);
	printf("Please input the operator: \n> ");
	operator = getchar();
	operator = getchar();
	
	switch(operator){
		case '+' :
			result = operand1 + operand2;
			printf("%d + %d = %d",operand1,operand2,result);
		break;
		
		case '-' :
			result = operand1 - operand2;
			printf("%d - %d = %d",operand1,operand2,result);
		break;
		
		case '*' :
			result = operand1 * operand2;
			printf("%d * %d = %d",operand1,operand2,result);
		break;
		
		case '/' :
			result = operand1 / operand2;
			printf("%d / %d = %d",operand1,operand2,result);
		break;
		
		default :
		printf("The input was invalid!");
	}
	
	return(0);
}