#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Read a file and write a file 
int main() {
	//create a file
	//fopen will open a file for us
	//fopen("file name", file mode: )
	//file mode: r stands for read, a stands for append, w stands for write
	//every time after opening the file we need to close the file
	//we create a pointer to acess the memory address of our file

	//create a file
	//if fopen is not working, use fopen_s which takes three parameters in its function call
	//FILE* fpointer = fopen_s(&fpointer, "employees.txt", "w");
	// 
	//write information
	FILE* fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "Jim, Salemsman\nPam, Receptionist\nOscar, Accounting");
	fclose(fpointer);

	//append information
	FILE* fpointer1 = fopen("employees.html", "a");
	fprintf(fpointer1, "\nKelly, Customer Service");
	fclose(fpointer1);

	//read a file we need to store characters
	char line[225];
	FILE* fpointer2 = fopen("employees.txt", "r");
	//read indivisual line of a code
	//fgets(line, size, file address)
	fgets(line, 225, fpointer2);// print out all characters in the first line
	fgets(line, 225, fpointer2);// print out all characters in the second line
	fgets(line, 225, fpointer2);
	printf("%s", line);

	fclose(fpointer2);

	return 0;
}