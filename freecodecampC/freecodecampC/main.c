#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	//Drawing a shape
	printf("      /|\n"); 
	printf("     / |\n"); 
	printf("    /  |\n");
	printf("   /___|\n");


	//variables in C: they are essentially a container to manage our data
	// in C char will play a role for both character and string
	// single character 'c' for collection of character characterName[]= "John

	char characterName[] = "John";
	int characterAge = 35;
	printf("Ther are once was a man named %s\n", characterName);
	printf("he was %d years old.\n", characterAge);
	characterAge = 70;
	printf("he really liked the name %s\n", characterName);
	printf("but did not like being %d.\n", characterAge);


	// Data types in C
	//integer, decimal numbers: double, float, character, string: collection of characters, 

	int age = 40;
	double gpa = 3.7;
	char grade = 'F';
	char phrase[] = "We are creating a sort of array to store a collection of character";

	// printf with more details
	//\n creats new line, to create anything add a backslash like \" for " mark

	printf("Hello\"world\" ");
	// print out a number, format specifier
	// %d print out integer number, %s for string, %c for character, %f for double or float
	printf("my favorit %s is %d", "number", 500);
	

	// working with numbers in C
	printf("\nA floating number is: %f", 8.9+ 4.5);
	printf("\nAn integer number is:%d", 8 + 4);
	printf("\n2^3 is: %f\n", pow(2,3));

	//constant in C: is a special type of variable that can't be modified
	//as a convension constants are all in caps to specify it is not changable
	const int NUM = 5;
	printf("%d\n", NUM);
	int num1 = 8;
	printf("%d\n", num1);

	//getting user input
	//we will add & to integer, double, character, and anything but not string
	
	/*int age1;
	double gpa1;
	printf("Enter your age: ");
	scanf_s("%d", &age1);
	printf("\nyou are %d years old", age1);

	printf("\nEnter your gpa: ");
	scanf_s("%lf", &gpa1);
	printf("\nyour gpa is %lf.", gpa1);
	*/


	//below function will throw an exception since it can't figure out number of characters
	/*char name[40];
	printf("\nEnter your name: ");
	scanf_s("%s", name);
	printf("\nyour name is %s", name);
	*/

	// to resolve the problem we are usign fgets function, which can grab the whole line of text
	// to avoid overflow the buffer we specify number of stored character
	
	char name[40];
	printf("\nEnter your name: ");
	fgets(name, 40, stdin);// stdin is standard input
	printf("\nyour name is %s", name);

	//fgets which is comming after scanf_s will be ignored!





	return 0;
}