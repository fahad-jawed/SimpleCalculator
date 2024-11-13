#include <stdio.h>
#include <math.h>

int main () {
	float op1, op2, result;
	char op;
	printf("This is a simple calculator. \n\n");
	
	printf("operand 01: ");
	scanf("%f", &op1);
	
	printf("operand 02: ");
	scanf("%f", &op2);
	
	printf("\nChoose an operation (+, -, *, /): ");
	scanf(" %c", &op);
	
	if (op == '+') 
		result = op1 + op2;
	else if(op == '-')
		result = op1 - op2;
	else 
		printf("invalid operation");
	
	printf("\n%.1f %c %.1f = %.1f",op1,op,op2,result);
	
}