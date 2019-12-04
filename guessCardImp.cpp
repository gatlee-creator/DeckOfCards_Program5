/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Implementation file for GuessCard Class
*/
#include "guessCard.h"
#include <iostream>

/*
    Function not included in class but used
    as a small utility to convert all user 
    input into uppercase lettering. 
    This way a user can enter upper or lower case
    answers 
*/
void upper(string &str){
    for(int i=0; i < str.length(); i++)
        str[i] = toupper(str[i]);
}

/*
    This function takes input from the user to 
    check if it matches the face value on top
    of the deck. 
*/
int GuessCard::guessFace(){
    
    //first shuffle the deck
    shuffleDeck(); 
    cout << "Deck shuffled.." << endl;

    //then ask user for their guess 
     cout << "Enter guess for face value " 
          << "of the card on top of the deck: " << endl;
     cout << "(ex. \"King\")" << endl;
     cin >> guess; 
     upper(guess); //convert input to all uppercase

     if(guess == getFace()) //check if the guess is correct
         cout << "Correct! Good guess" << endl;
     else{
         cout << "Wrong guess!" << endl;
         cout << "Face of top card: " << getFace() << endl;
         return -1; 
     } 
 
    return 0;
}

/*
    This function takes input from the user to 
    check if it matches the suit on top
    of the deck. 
*/
int GuessCard::guessSuit(){
    
     //first shuffle the deck
     shuffleDeck(); 
     cout << "Deck shuffled..." << endl;

     //then ask user for their guess 
     cout << "Enter guess for suit value " 
         << "of the card on top of the deck: " << endl;
     cout << "(ex. \"Spades\")" << endl;
     cin >> guess; 
     upper(guess);

     if(guess == getSuit())
         cout << "Correct! Good guess" << endl;
     else{
         cout << "Wrong guess!" << endl;
         cout << "Suit of top card: " << getSuit() << endl;
         return -1; 
     } 

    return 0;
}

/*
    This function takes input from the user to 
    check if it matches the suit and face on top
    of the deck. 
*/
int GuessCard::guessFaceAndSuit(){
    
     string temp; 
     //first shuffle the deck
     shuffleDeck(); 
     cout << "Deck shuffled..." << endl;

     //then ask user for their guess 
     cout << "Enter guess for suit value " 
          << "of the card on top of the deck: " << endl;
     cout << "(ex. \"Spades\")" << endl;
     cin >> guess; 
     upper(guess);

      //then ask user for their guess 
     cout << "Enter guess for face value " 
          << "of the card on top of the deck: " << endl;
     cout << "(ex. \"King\")" << endl;
     cin >> temp; 
     upper(temp);

     if((guess == getSuit()) && (temp == getFace())) 
         cout << "Correct! Good guess" << endl;
     else{
         cout << "Wrong guess!" << endl;
         cout << "Face of top card: " << getFace() << endl;
         cout << "Suit of top card: " << getSuit() << endl;
         return -1; 
     } 

    return 0;
}



