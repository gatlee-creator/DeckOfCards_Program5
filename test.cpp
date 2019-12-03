#include <iostream>
#include "card_deck.h"

using namespace std; 

int main()
{
    CardDeck cards; 

    cout << cards.getFace() << endl;
    cout << cards.getSuit() << endl;

    cards.shuffleDeck();

    cout << cards.getFace() << endl;
    cout << cards.getSuit() << endl;

    cards.shuffleDeck();

    cout << cards.getFace() << endl;
    cout << cards.getSuit() << endl;
}