#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Use current time as seed for random generator
    srand(time(0));

    int player, computer = rand() % 3; // rand() % 3 gives numbers from 0 to 2
                                       /*
                                       0 --> snake
                                       1 -- > _water
                                       2 --> gun
                                       */

    printf("Choose 0 for Snake, 1 for Water and 2 for Gun: \n");
    scanf("%d", &player);
    printf("%d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a DRAW! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win! \n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose! \n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose! \n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a DRAW! \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win! \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win! \n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose! \n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a DRAW! \n");
    }
    else{
        printf("Something went wrong. \n");
        
    }

    return 0;
}