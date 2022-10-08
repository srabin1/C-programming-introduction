#include<math.h>
#include<stdlib.h>
#include<stdio.h>
//structs is a data structure which can store a group of data types
//we should create struct above of our main mehtod
//the name of struct should be started with caps
struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;

};
int main() {
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	//since student name is string it is not valid to assign name 
	//to student1 like this: student1.name = "Sanaz", instead do below signature
	strcpy(student1.name, "Sanaz");
	strcpy(student1.major, "Computer Science");

	printf("student's gpa: %f\n", student1.gpa);
	printf("student's age: %d\n", student1.age);
	printf("student's name: %s\n", student1.name);
	printf("student's major: %s\n", student1.major);


	struct Student student2;
	student2.age = 25;
	student2.gpa = 4.0;
	//since student name is string it is not valid to assign name 
	//to student1 like this: student1.name = "Sanaz", instead do below signature
	strcpy(student2.name, "Major");
	strcpy(student2.major, "civil Engineering");

	printf("student's gpa: %f\n", student2.gpa);
	printf("student's age: %d\n", student2.age);
	printf("student's name: %s\n", student2.name);
	printf("student's major: %s\n", student2.major);


	//while loop in C
	int index = 1;
	//while will check the condition first then go inside of loop
	while (index <= 5) {
		printf("%d\n", index);
		index = index + 1;
	}

	do {
		printf("%d\n", index);
		index = index + 1;

	} while (index <= 5);

	return 0;

}