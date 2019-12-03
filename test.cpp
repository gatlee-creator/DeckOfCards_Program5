#include <iostream>
#include "cardDeck.h"
#include "guessCard.h"

using namespace std; 

int main()
{
    GuessCard guess;

    cout << guess.getFace() << endl;

    guess.shuffleDeck(); 

    guess.guessFace(); 

}