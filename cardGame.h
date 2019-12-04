#include "cardDeck.h"
#include "guessCard.h"

class CardGame
{
    public:
       
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
            int input(char selection, GuessCard &guess); 


            char user_selection; 
            int exit_game; 
};