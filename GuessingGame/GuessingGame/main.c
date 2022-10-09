#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	int secretNumber = 5;
	int guess;
	int guessCount = 0;// make user's hand tight
	int guessLimit = 3;
	int outOfGuesses = 0;

	// since I haven't initialized guess here if I do while loop it 
	//will return an error, so I just replaced it with do-while loop
	do {
		if (guessCount < guessLimit) {
			printf("Enter a number: \n");
			scanf_s("%d", &guess);
			guessCount++;
		}
		else {
			outOfGuesses = 1;
		}
	} while (guess != secretNumber && outOfGuesses == 0);
	if (outOfGuesses == 1)
		printf("out of guesses!\n");
	else
		printf("You win!\n");

	//for loop in C
	for (int i = 0; i < 5; i++) {
		printf("%d\n", i);
	}

	int luckyNumbers[] = { 4, 8, 15, 16, 20 };
	for (int i = 0; i < 6; i++) {
		printf("%d\n", luckyNumbers[i]);
	}
	return 0;

}