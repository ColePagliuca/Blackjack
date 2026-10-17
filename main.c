#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int ask_to_play(const char *prompt)
{
    char input[32];
    char *end;
    long choice;

    while (1)
    {
        printf("%s", prompt);

        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            return 0;
        }

        choice = strtol(input, &end, 10);
        while (isspace((unsigned char)*end))
        {
            end++;
        }

        if (end != input && *end == '\0' && (choice == 0 || choice == 1))
        {
            return (int)choice;
        }

        printf("Please enter 1 or 0.\n");
    }
}

int main(void)
{
    unsigned int seed = (unsigned int)time(NULL);
    srand(seed);

    printf("welcome to Blackjack!\n");

    if (ask_to_play("Would you like to play? (1 = yes, 0 = no): "))
    {
        do
        {
            printf("Starting a game of Blackjack...\n");
            play_round();
        } while (ask_to_play("Would you like to play again? (1 = yes, 0 = no): "));
    }

    printf("Thanks for playing!\n");
    return 0;
}
