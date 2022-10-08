#include<math.h>
#include<stdio.h>
#include<stdlib.h>



int main() {
	//switch statement

	char grade = 'A';
	switch (grade) {
	case 'A':
		printf("You did great!\n");
		break;
	case 'B': 
		printf("You did alright!\n");
		break;
	case 'C':
		printf("You did poorly!\n");
		break;
	case 'D':
		printf("You did very bad!\n");
		break;
	case 'F':
		printf("You failed!\n");
		break;

	default :
		printf("invalid grade!\n");
	}




	//create a fully functional calculator
	double num1;
	double num2;
	char op;
	printf("Enter a number: ");
	scanf_s("%lf", &num1);
	printf("Enter operator: ");
	//we should add space before %c in scanf_s
	//again we have printf right after scanf_s, 
	//which is going to be skipped, to avoid that add a space before %c
	scanf_s(" %c", &op);
	printf("Enter a number: ");
	scanf_s("%lf", &num2);

	printf("The result is: ");
	if (op == '+') {
		printf("%f\n", num1 + num2);
	}
	else if (op == '-') {
		printf("%f\n", num1 - num2);
	}
	else if (op == '/') {
		printf("%f\n", num1 / num2);
	}
	else if (op == '*') {
		printf("%f\n", num1 * num2);
	}
	else {
		printf("invalid operator");
	}

	return 0;
}