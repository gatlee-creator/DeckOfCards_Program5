/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Header file for Guess class 
*/
#include "cardDeck.h"
#include <string>
using namespace std;

class GuessCard : public CardDeck
{
    public:
        int guessFace();
        /*
            This function will prompt the user 
            to enter a guess for what the face value 
            will be on top of the deck.
            Preconditions:
                - input must be a string ex. "Queen"
                - input can lower or upper case
            If the guess is wrong then a -1 will be returned 
        */
        int guessSuit();
        /*
            This function will prompt the user 
            to enter a guess for what the suit value
            will be on top of the deck.
            Preconditions:
                - input must be a string ex. "Hearts"
                - input can lower or upper case
            If the guess is wrong then a -1 will be returned 
        */
        int guessFaceAndSuit(); 
        /*
            This function will prompt the user 
            to enter a guess for what the face and
            suit values will be be on top of the deck.
            Preconditions:
                - input must be a string ex. "Queen"
                - input can lower or upper case
            If the guess is wrong then a -1 will be returned 
        */
       private:
            string guess;
};