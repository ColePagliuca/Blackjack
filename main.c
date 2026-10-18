#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//structs for Card and Deck
struct Card
{
    const char *rank;
    const char *suit;
    int value;
};
typedef struct Card Card;

struct Deck
{
    Card cards[52];
    int top_card_index;
};
typedef struct Deck Deck;


//-----------------------------------------------------------//



void play_round(void);
static int ask_to_play(const char *prompt);
void generate_deck(Deck *deck); // Assuming this function is defined elsewhere to initialize the deck

int main(void)
{
    unsigned int seed = (unsigned int)time(NULL);
    srand(seed);
    // Create an empty deck; its storage is managed automatically.
    Deck deck = {0};

    //Filling the deck with cards
    generate_deck(&deck);

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

/*
Def: ask_to_play - Prompt the user to play a game of Blackjack.

 * @prompt: The prompt message to display to the user.
 * @return: 1 if the user wants to play, 0 otherwise.
*/
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


void play_round(void)
{
    // Placeholder for the actual game logic
    printf("This is where the game logic would go.\n");
}