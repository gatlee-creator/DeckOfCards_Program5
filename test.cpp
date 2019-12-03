#include <iostream>
#include "cardDeck.h"
#include "guessCard.h"

using namespace std; 

int main()
{
    CardDeck cards; 

    cout << cards.getFace() << endl;
    // cout << cards.getSuit() << endl;

    cards.shuffleDeck();

    cout << cards.getFace() << endl;
    // cout << cards.getSuit() << endl;

    cards.shuffleDeck();

    cout << cards.getFace() << endl;
    // cout << cards.getSuit() << endl;

    GuessCard guess; 

    guess.guessFace(); 

}