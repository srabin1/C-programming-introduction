#include <stdio.h>
#include <iostream>

// declaration of a structure
struct Rectangle {
	int length;
	int breadth;
	char x;

}r2;
//above variable is also a global variable
// this variable is a global one
struct Rectangle r3;
int main()

{
//declaration of a structure
	// this variable is local to the main function
	struct Rectangle r1 = {10,5};
	printf("%d", sizeof(r1));
	//printf("%d", r1.length);

	
	return 0;

}