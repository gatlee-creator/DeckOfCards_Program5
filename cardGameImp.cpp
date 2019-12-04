#include "cardGame.h"   
#include <iostream>

void CardGame::menu(){

    cout << "Graham's Card Game" << endl;
    cout << "==================" << endl;
    
    cout << "[a] guess suit of the top card" << endl;
    cout << "[b] guess face of the top card" << endl;
    cout << "[c] guess the suit and face of"
         << "the top card" << endl;
    cout << "[d] quit" << endl;

    cin >> user_selection; 
}

int CardGame::input(char selection, GuessCard &guess){
    
    const int WRONG_GUESS = -1; 

    switch (selection)
    {
        case 'a':
            //ABSRACT THIS JUNK
            // if(guess.guessFace() == WRONG_GUESS) 
            //     cout << "wrong guess" << endl;
            //     cout << "face of top card:" << guess.getFace() << endl;
            break;
        case 'b':
            /* code */
            break;
        case 'c':
            /* code */
            break;
        case 'd':
            /* code */
            break;
        
        default:
            break;
    }
}