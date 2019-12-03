#include "guessCard.h"
#include <iostream>

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