
#ifndef cardGame_H
#define cardGame_H

#include "cardGame.h"   
#include <iostream>


CardGame::CardGame(){
    GuessCard guess;
    guessptr = &guess;

    exit_game = false;
}


void CardGame::menu(){

    cout << "Graham's Card Game" << endl;
    cout << "==================" << endl;
    
    cout << "[a] guess suit of the top card" << endl;
    cout << "[b] guess face of the top card" << endl;
    cout << "[c] guess the suit and face of"
         << "the top card" << endl;
    cout << "[d] quit" << endl;

    cin >> user_selection; 
    input(user_selection);
}

int CardGame::input(char selection){
    
    const int WRONG_GUESS = -1; 

    switch (selection)
    {
        case 'a':
            guessptr->guessSuit(); 
            break;
        case 'b':
            guessptr->guessFace();
            break;
        case 'c':
            guessptr->guessFaceAndSuit();
            break;
        case 'd':
            exit_game = true;
            break;
        
        default:
            cout << "Please enter a value menu choice" << endl;
            break;
    }

    return false; 
}

void CardGame::play(){

    while(exit_game != true){
        menu();
    }
}

#endif 