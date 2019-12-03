/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Implementation file for GuessCard Class
*/
#include "guessCard.h"
#include <iostream>

/*
    This function takes input from the user to 
    check if it matches the face value on top
    of the deck. 
*/
int GuessCard::guessFace(){
    
    //first shuffle the deck
    shuffleDeck(); 

    //then ask user for their guess 
     cout << "ENTER GUESS FOR FACE: " << endl;
     cin >> guess; 

     if(guess == getFace()) //check if the guess is correct
         cout << "Match" << endl;
     else 
        return -1; 
     
    
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

     //then ask user for their guess 
     cout << "ENTER GUESS FOR SUIT: " << endl;
     cin >> guess; 

     if(guess == getSuit())
         cout << "Match" << endl;
      else 
          return -1; 
     
    
    return 0;
}

/*
    This function takes input from the user to 
    check if it matches the suit and face on top
    of the deck. 
*/
int GuessCard::guessFaceAndSuit(){
    
    //  //first shuffle the deck
    //  shuffleDeck(); 

    //  //then ask user for their guess 
    //  cout << "ENTER GUESS FOR SUIT: " << endl;
    //  cin >> guess; 

    //  if(guess == getSuit())
    //      cout << "Match" << endl;
    //   else 
    //       return -1; 

    // //then ask user for their guess 
    //  cout << "ENTER GUESS FOR FACE: " << endl;
    //  cin >> guess; 

    //  if(guess == getFace()) //check if the guess is correct
    //      cout << "Match" << endl;
    //  else 
    //     return -1; //THIS NEEDS TO BE CHANGED 
     
    
    return 0;
}

