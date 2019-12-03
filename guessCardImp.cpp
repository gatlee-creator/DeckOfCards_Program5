/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Header file for Guess class 
*/
#include "guessCard.h"
#include <iostream>

/*
    This function takes input from the user to 
    check if it matches the face value on top
    of the deck. 
*/
int GuessCard::guessFace(){
    
     cout << "ENTER GUESS: " << endl;
     cin >> guess; 

     if(guess == getFace()){
         cout << "Match" << endl;
         return 0;
     } else {
          return -1; 
     } 
       
}