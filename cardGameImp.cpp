/*
    Name: Graham Atlee
    Course: csc1720
    Date: 12/3/2019

    Implementation file for the CardGame class 
*/
#include "cardGame.h"   
#include <iostream>

//default constructor  
CardGame::CardGame(){
    exit_game = false;
}

/*
    This function prints all the menu options
    for the card game. 
    Its accepts user input and then calls input 
    to active an option 
*/
void CardGame::menu(){

    cout << "Graham's Card Game" << endl;
    cout << "==================" << endl;
    
    cout << "[a] guess suit of the top card" << endl;
    cout << "[b] guess face of the top card" << endl;
    cout << "[c] guess the suit and face of "
         << "the top card" << endl;
    cout << "[d] quit" << endl;

    cin >> user_selection; 
    input(user_selection);
}

/*
    This function takes user input and calls the 
    according functions from the GuessCard class. 
*/
void CardGame::input(char selection){
    
    switch (selection)
    {
        case 'a':
            guess.guessSuit(); 
            break;
        case 'b':
            guess.guessFace();
            break;
        case 'c':
            guess.guessFaceAndSuit();
            break;
        case 'd':
            exit_game = true;
            break;
        
        default:
            cout << "Please enter a value menu choice" << endl;
            break;
    }

}

/*
    This abstract function can be called to 
    start the card game. It essentially calls
    menu in a loop. 
    Postcondition:
        - if exit_game == false, then exit program
*/
void CardGame::play(){

    while(exit_game != true)
        menu();
    
} 

