#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//create functions, return type of the function is very important
//in visual studio I have to define all my functions before main function
//or we can define all our functions below the main function and add function signature on top
//we can pass a parameter inside of void function

void sayHiAge(char name[], int age);
void sayHiTo(char name[]);
void sayHi();
double cube(double num);
int maxFunction(int num1, int num2);
int maxFunctionForThree(int num1, int num2, int num3);



int main() {
	char name[] = "Sanaz";
	sayHiTo(name);
	sayHiTo("Mike");
	sayHi();
	sayHiAge("Mohsen", 35);
	printf("Answer: %f\n", cube(2.0));
	printf("max is: %d\n", maxFunction(2, 3));
	printf("max is: %d\n", maxFunctionForThree(2, 3, 5));
	if (!(3 < 2)) {
		printf("True");
	}
	return 0;
}



void sayHiAge(char name[], int age) {

	printf("hello %s, you are %d;\n", name, age);
}
void sayHiTo(char name[]) {

	printf("hello %s!\n", name);
}

void sayHi() {

	printf("hello user!\n");
}

//return statement in C
double cube(double num) {
	double result = pow(num, 3);
	return result;
	//return num*num*num;
	//can't add any code after return keyword, it is going to break the function
}

//build a max function to learn if-else statement
int maxFunction(int num1, int num2) {
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}

int maxFunctionForThree(int num1, int num2, int num3) {
	int result;
	if (num1 >= num2 && num1 >= num3)
		result = num1;
	else if (num2 >= num1 && num2 >= num3)
		result = num2;
	else
		result = num3;
	return result;
}





