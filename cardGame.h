/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Header file for the CardGame class 
*/
#ifndef cardGame_H
#define cardGame_H

#include "guessCard.h"

class CardGame
{
    public:

        CardGame();
        /*
            Default constructor intializes exit_game 
            to false. 
        */
        void play(); 
        /*
            Abstract public function that can be called 
            to start the game. 
        */

    private:

        void menu(); 
        /*
            This function prints the main menu
            that the user will see for our card game. 
            Menu should only be invoked from play 
        */
        void input(char selection); 
        /*
            This function will take user input and should
            only be called from menu     
        */
        
        
        GuessCard guess; 
        char user_selection; 
        bool exit_game;
};

#endif 