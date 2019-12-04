#include "cardDeck.h"
#include "guessCard.h"

class CardGame
{
    public:

        CardGame();
        /*
            Default constructor 
        */
       
        void play(); 
        /*
            This is the one function that is public
            so it can be called to start our card game. 
        */

       private:
            void menu(); 
            /*
                This function prints the main menu
                that the user will see for our card game 
            */
            int input(char selection); 
            /*
                This function will take menu input and 
                call functions from the guessCard class 
                to play the game. 
            */
          

            char user_selection; 
            bool exit_game;
            GuessCard *guessptr;
};