#include <iostream>
#include "cardDeck.h"
#include "guessCard.h"

using namespace std; 

int main()
{
    GuessCard guess;

    // cout << "FACE: " << guess.getFace() << endl;
    // cout << "SUIT: " << guess.getSuit() << endl;

    guess.guessSuit(); 
    guess.guessFace(); 

    // cout << "FACE: " << guess.getFace() << endl;
    // cout << "SUIT: " << guess.getSuit() << endl;

    // guess.guessFaceAndSuit(); 

    // cout << "FACE: " << guess.getFace() << endl;
    // cout << "SUIT: " << guess.getSuit() << endl;
    

}