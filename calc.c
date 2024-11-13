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
	
	switch (op) {
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    case '*':
        result = op1 * op2;
        break;
    case '/':
        result = op1 / op2;
        break;
    default:
        printf("Invalid operator!\n");
}

	printf("\n%.1f %c %.1f = %.1f",op1,op,op2,result);
	
}