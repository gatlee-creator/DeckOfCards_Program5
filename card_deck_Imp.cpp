#include "card_deck.h"
#include <string>
#include <algorithm>

using namespace std;

/*
    Default constructor intializes the face 
    and suit vectors with the values of a standard
    52 card deck 
*/
CardDeck::CardDeck(){

    //intialize face and suit to 0 
    face = 0;
    suit = 0;

    //intialize the face values 
    faces.push_back("ACE"); 
    faces.push_back("ONE");
    faces.push_back("TWO");
    faces.push_back("THREE");
    faces.push_back("FOUR");
    faces.push_back("FIVE");
    faces.push_back("SIX");
    faces.push_back("SEVEN");
    faces.push_back("EIGHT");
    faces.push_back("NINE");
    faces.push_back("TEN");
    faces.push_back("JACK");
    faces.push_back("QUEEN");
    faces.push_back("KING");

    //intialize suit value 
    suits.push_back("HEARTS");
    suits.push_back("CLUBS");
    suits.push_back("SPADES");
    suits.push_back("DIAMONDS");

} //end default constructor 

/*
    Function returns the face value on
    top of the deck. 
*/
string CardDeck::getFace(){
    return faces.front();;
} 

/*
    Function returns the suit value 
    on top of the deck 
*/
string CardDeck::getSuit(){
    return suits.front();;
} 

/*
    Function calls the built random_shuffle 
    to shuffle both the faces and suits vector
*/
void CardDeck::shuffleDeck(){

    //shuffle the face values 
    random_shuffle(faces.begin(), faces.end());

    //shuffle the suit values
    random_shuffle(suits.begin(), suits.end());
}