#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 100 + 1; // will generate randome between 1 to 100
    //printf("The Number is %d\n", number);
    // keep running the loop until number is gussed
    do
    {
        printf("Guesss the number between 1 to 100\n");
        scanf("%d", &guess); 
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("You Guess it in %d attempt\n", nguesses);
        }

        nguesses++;
    } while (guess != number);

    return 0;
}