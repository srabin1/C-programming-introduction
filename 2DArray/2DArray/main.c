#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {

	//2 dimensional array
	int nums[3][2] = { {1, 2},{3, 4},{5, 6}};
	printf("%d", nums[0][1]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", nums[i][j]);
		}
		printf("\n");
	}

	// Memory addresses
	int age = 30;
	int* pAge = &age;
	double gpa = 3.4;
	double* pGpa = &gpa;
	char grade = 'A';
	char* pGrade = &grade;
	
	//To print out physical(Memory) address we need to type %p along with &...
	printf("the memory address will be:\n");
	printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade );
	printf("age: %p\n", pAge);//==printf("%p", &age);

	//Derefrencing pointer in C: going to memory address and grab a piece of information
	printf("Derefrencing a pointer: %d\n", *pAge);//or
	printf("Derefrencing a pointer: %d\n", *&age);
	//getting memory address again
	printf("Physical address: %d\n", &*&age);
	//we can repeatedly add * and & for derefrencing and memory address


	//pointers
	
	return 0;
}