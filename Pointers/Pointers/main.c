#include <stdio.h>   //standard library header
//source files are .c extension

int main() {

	int a = 10;
	int* p = &a;

	printf("value a is: %d\n", a);
	printf("address of a: %d\n", &a);
	printf("using pointer: %d\n", p);
	printf("derefrencing: %d \n", *p);
	printf("address of p: %d\n", &p);
	printf("Hi, My name is Sanaz");

	//reading input fromt the terminal
	//scanf is converting string charcter by character to a
	//numerical vlaue and this is the job of the scanf funciton




	//int A[5] = { 2,4,6,8,10 };
	//int *p = A;
	
	//for (int i = 0; i < 5; i++)
		//printf("print all values: %d\n", p[i]);

	return 0;

}