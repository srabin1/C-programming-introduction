/*#include <stdio.h>
#include <string.h>
int main() {

	char str[100];// creating a string array
	//int i;
	printf("Enter a value:");
	scanf_s("%s", str);
	printf("\nYou entered:%s\n", str);

	//double x;
	//scanf_s("%lf", &x);


	return 0;
}*/
#include <stdio.h>
int main()
{
	char name[64];
	printf("Enter name: ");
	if (scanf_s("%s", name, sizeof(name)) == 1)
		printf("Your name is %s\n", name);
	return 0;
}