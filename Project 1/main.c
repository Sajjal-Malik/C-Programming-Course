#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, number_of_guesses = 0, guessed_number;

    // Use current time as seed for random generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1; // rand() % 100 gives numbers from 0 to 99, +1 makes it 1 to 100

    // printf("Random number between 1 and 100: %d\n", num);

    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed_number);

        if (guessed_number > randomNumber){
            printf("Lower number please.\n");
        }
        else if (guessed_number < randomNumber) {
            printf("Higher number please.\n");
        }

        number_of_guesses++;


    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d number of guesses--> Guessed number is: %d\n", number_of_guesses,guessed_number);

    return 0;
}
