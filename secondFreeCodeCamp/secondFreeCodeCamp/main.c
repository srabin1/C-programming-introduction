#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	//printf for double is %f but scanf for double is %lf
	
	/*double num1;
	double num2;
	printf("Enter first number: ");
	scanf_s("%lf", &num1);
	printf("Enter second number: ");
	scanf_s("%lf", &num2);
	printf("Answer: %f", num1 + num2);
	*/

	//creat a simple game
	//comment out above scanf_s to avoid skipping my fgets function
	char color[20];
	char pluralNoun[20];
	char celebrity[20];

	printf("Enter a color: ");
	fgets(color, 20, stdin);

	printf("Enter a pluralNoun: ");
	fgets(pluralNoun, 20, stdin);;

	printf("Enter a celebrity: ");
	fgets(celebrity, 20, stdin);


	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s\n", celebrity);

	//Arrays: is a container to store piece of information
	//what type of the data we want to store inside of an array
	//1. first approach to write an array in C
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	luckyNumbers[1] = 200;
	printf("%d\n", luckyNumbers[0]);
	printf("%d\n", luckyNumbers[1]);

	//2. second approach to write an array in C: assign it a size and enter all elements one by one
	int luckyNumbers1[10];
	luckyNumbers1[1] = 200;
	printf("%d\n", luckyNumbers1[0]);
	printf("%d\n", luckyNumbers1[1]);
	

	char phrase[20]="Array";// this is a string of character


	//function in C:
	return 0;
}